param([string]$GameDirectory, [switch]$Preview, [switch]$CheckOnly)
$ErrorActionPreference = 'Stop'
$root = $PSScriptRoot
$log = $null
function Report([string]$Message) {
    Write-Host $Message
    if ($script:log) { Add-Content -LiteralPath $script:log -Value $Message }
}
function Resolve-Game([string]$Path) {
    if (-not $Path) { return }
    $Path = $Path.Trim().Trim('"')
    if ([IO.File]::Exists($Path)) { $Path = [IO.Path]::GetDirectoryName($Path) }
    foreach ($folder in @($Path, [IO.Path]::Combine($Path, 'Remastered'))) {
        if ([IO.File]::Exists([IO.Path]::Combine($folder, 'PoseidonGame.exe'))) { return [IO.Path]::GetFullPath($folder) }
    }
}
try {
    $runtime = Join-Path $root '.runtime'
    $logs = Join-Path $runtime 'logs'
    New-Item -ItemType Directory -Force -Path $logs | Out-Null
    $log = Join-Path $logs 'launcher-latest.txt'
    Set-Content -LiteralPath $log -Value ('Showcase launcher r003 - ' + (Get-Date -Format o))
    Report ('Package: ' + $root)
    $mod = Join-Path $root '@DBS_GR_Showcase'
    if (-not [IO.File]::Exists((Join-Path $mod 'AddOns\dbsgr.pbo'))) {
        throw 'Compiled addon missing. Download GR-CWR-Showcase-r003.zip from GitHub Releases (not Code > Download ZIP), then extract the WHOLE ZIP before running the launcher.'
    }
    $saved = Join-Path $runtime 'GameDirectory.txt'
    $game = $null
    if ($GameDirectory) {
        $game = Resolve-Game $GameDirectory
        if (-not $game) { throw ('PoseidonGame.exe was not found in the supplied folder: ' + $GameDirectory) }
    } else {
        $candidates = @()
        if ([IO.File]::Exists($saved)) { $candidates += Get-Content -LiteralPath $saved -TotalCount 1 }
        $libraries = @()
        foreach ($key in @('HKCU:\Software\Valve\Steam', 'HKLM:\SOFTWARE\Valve\Steam', 'HKLM:\SOFTWARE\WOW6432Node\Valve\Steam')) {
            $entry = Get-ItemProperty -LiteralPath $key -ErrorAction SilentlyContinue
            if ($entry.SteamPath) { $libraries += $entry.SteamPath }
            if ($entry.InstallPath) { $libraries += $entry.InstallPath }
        }
        foreach ($drive in [IO.DriveInfo]::GetDrives()) {
            if ($drive.IsReady -and $drive.DriveType -eq 'Fixed') {
                foreach ($suffix in @('SteamLibrary', 'Steam', 'Program Files (x86)\Steam', 'Program Files\Steam')) {
                    $libraries += [IO.Path]::Combine($drive.RootDirectory.FullName, $suffix)
                }
            }
        }
        foreach ($library in @($libraries | Select-Object -Unique)) {
            $vdf = [IO.Path]::Combine($library, 'steamapps\libraryfolders.vdf')
            if ([IO.File]::Exists($vdf)) {
                foreach ($hit in [regex]::Matches([IO.File]::ReadAllText($vdf), '"(?:path|\d+)"\s+"([^"\r\n]+)"')) {
                    $value = $hit.Groups[1].Value.Replace('\\', '\')
                    if ([IO.Path]::IsPathRooted($value)) { $libraries += $value }
                }
            }
        }
        foreach ($library in @($libraries | Select-Object -Unique)) { $candidates += [IO.Path]::Combine($library, 'steamapps\common\ARMA Cold War Assault\Remastered') }
        foreach ($candidate in $candidates) { $game = Resolve-Game $candidate; if ($game) { break } }
        if (-not $game -and -not $CheckOnly) {
            Report 'CW:R was not found automatically. Paste the Remastered folder path below.'
            $game = Resolve-Game (Read-Host 'CW:R folder')
        }
        if (-not $game) { throw 'CW:R not found. Drag Remastered\PoseidonGame.exe onto the launcher, or pass its folder as the first argument.' }
    }
    $exe = Join-Path $game 'PoseidonGame.exe'
    Report ('Game: ' + $exe)
    Report ('Version: ' + [Diagnostics.FileVersionInfo]::GetVersionInfo($exe).FileVersion)
    Report ('Mod: ' + $mod)
    if ($CheckOnly) { Report 'Checks passed; no game launched.'; exit 0 }
    Set-Content -LiteralPath $saved -Value $game
    $env:POSEIDON_USER_DIR = Join-Path $runtime 'user'
    $env:POSEIDON_CACHE_DIR = Join-Path $runtime 'cache'
    $env:POSEIDON_TEMP_DIR = Join-Path $runtime 'temp'
    $env:POSEIDON_USER_CONTENT_DIR = Join-Path $runtime 'content'
    $editor = Join-Path $env:POSEIDON_USER_CONTENT_DIR 'missions\GR_CWR_Showcase_r001.Intro'
    if (-not [IO.Directory]::Exists($editor)) {
        New-Item -ItemType Directory -Force -Path (Split-Path -Parent $editor) | Out-Null
        Copy-Item -LiteralPath (Join-Path $root 'Missions\GR_CWR_Showcase_r001.Intro') -Destination $editor -Recurse
    }
    $launchArgs = @('-C', ('"' + $game + '"'), '--mod', ('"' + $mod + '"'), '--window', '--no-splash')
    if ($Preview) { $launchArgs += @('--test-mission', ('"' + $editor + '"')) }
    $stamp = Get-Date -Format 'yyyyMMdd-HHmmss-fff'
    $stdout = Join-Path $logs ($stamp + '-stdout.txt')
    $stderr = Join-Path $logs ($stamp + '-stderr.txt')
    $process = Start-Process -FilePath $exe -WorkingDirectory $game -ArgumentList $launchArgs -WindowStyle Normal -PassThru -RedirectStandardOutput $stdout -RedirectStandardError $stderr
    Report ('Started game PID ' + $process.Id)
    if ($process.WaitForExit(5000)) {
        Report ('Game exited during startup. Exit code: ' + $process.ExitCode)
        foreach ($file in @($stdout, $stderr)) {
            if ([IO.File]::Exists($file)) { Get-Content -LiteralPath $file -Tail 12 | ForEach-Object { Report $_ } }
        }
        throw 'The game closed during startup. Please send .runtime\logs\launcher-latest.txt and the newest stdout/stderr files.'
    }
    Report 'Game is running. Startup logs are in .runtime\logs.'
    exit 0
} catch {
    $message = 'ERROR: ' + $_.Exception.Message
    Write-Host $message -ForegroundColor Red
    if ($log) { Add-Content -LiteralPath $log -Value $message -ErrorAction SilentlyContinue }
    Write-Host 'Support: https://github.com/mr-dbs/ghost-recon-cwr-showcase/releases/tag/r003'
    exit 1
}

param([string]$GameDirectory, [switch]$Preview, [switch]$CheckOnly)
$ErrorActionPreference='Stop'
$root=$PSScriptRoot
if($GameDirectory -and (Test-Path -LiteralPath $GameDirectory -PathType Leaf)){$GameDirectory=Split-Path -Parent $GameDirectory}
$candidates=@()
if($GameDirectory){$candidates+=$GameDirectory}
$steam=(Get-ItemProperty -Path 'HKCU:\Software\Valve\Steam' -ErrorAction SilentlyContinue).SteamPath
if($steam){
 $libraries=@($steam)
 $vdf=Join-Path $steam 'steamapps\libraryfolders.vdf'
 if(Test-Path -LiteralPath $vdf){foreach($hit in [regex]::Matches((Get-Content -LiteralPath $vdf -Raw),'"path"\s+"([^"]+)"')){$libraries+=$hit.Groups[1].Value.Replace('\\','\')}}
 foreach($lib in $libraries){if([IO.Directory]::Exists($lib)){$candidates+=[IO.Path]::Combine($lib,'steamapps\common\ARMA Cold War Assault\Remastered')}}
}
$game=$candidates | Where-Object {[IO.File]::Exists([IO.Path]::Combine($_,'PoseidonGame.exe'))} | Select-Object -First 1
if(-not $game){throw 'CW:R not found. Drag the Remastered PoseidonGame.exe onto Play_CWR_Showcase.cmd, or pass its folder as the first argument.'}
if($CheckOnly){Write-Output ('Ready: '+[IO.Path]::Combine($game,'PoseidonGame.exe'));Write-Output ('Mod: '+[IO.Path]::Combine($root,'@DBS_GR_Showcase'));return}
$env:POSEIDON_USER_DIR=Join-Path $root '.runtime\user'
$env:POSEIDON_CACHE_DIR=Join-Path $root '.runtime\cache'
$env:POSEIDON_TEMP_DIR=Join-Path $root '.runtime\temp'
$env:POSEIDON_USER_CONTENT_DIR=Join-Path $root '.runtime\content'
$editor=Join-Path $env:POSEIDON_USER_CONTENT_DIR 'missions\GR_CWR_Showcase_r001.Intro'
if(-not(Test-Path -LiteralPath $editor)){New-Item -ItemType Directory -Force -Path (Split-Path -Parent $editor) | Out-Null;Copy-Item -LiteralPath (Join-Path $root 'Missions\GR_CWR_Showcase_r001.Intro') -Destination $editor -Recurse}
$mod=Join-Path $root '@DBS_GR_Showcase'
$launchArgs=@('-C',('"'+$game+'"'),'--mod',('"'+$mod+'"'),'--window','--no-splash')
if($Preview){$launchArgs+=@('--test-mission',('"'+$editor+'"'))}
Start-Process (Join-Path $game 'PoseidonGame.exe') -ArgumentList $launchArgs -WindowStyle Hidden

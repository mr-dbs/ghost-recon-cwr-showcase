param([Parameter(Mandatory=$true)][string]$ToolsPath)
$ErrorActionPreference='Stop'
$repo=Split-Path -Parent $PSScriptRoot
$tool=(Resolve-Path -LiteralPath $ToolsPath).Path
$source=Join-Path $repo 'Source/dbsgr'
$out=Join-Path $repo 'Build/Working'
New-Item -ItemType Directory -Force -Path $out | Out-Null
& $tool config bin (Join-Path $source 'config.cpp') -o (Join-Path $out 'check.bin')
if($LASTEXITCODE -ne 0){throw 'Addon configuration validation failed.'}
& $tool pbo pack $source (Join-Path $out 'dbsgr.pbo')
if($LASTEXITCODE -ne 0){throw 'PBO packaging failed.'}
Get-FileHash -LiteralPath (Join-Path $out 'dbsgr.pbo') -Algorithm SHA256

@echo off
setlocal
if not exist "%~dp0Play_Showcase.ps1" (
 echo Launcher files missing. Extract the whole release ZIP first.
 pause
 exit /b 1
)
if "%~1"=="" (
 powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%~dp0Play_Showcase.ps1" 
) else (
 powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%~dp0Play_Showcase.ps1"  -GameDirectory "%~1"
)
set "result=%errorlevel%"
if not "%result%"=="0" pause
exit /b %result%

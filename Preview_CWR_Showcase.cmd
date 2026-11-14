@echo off
setlocal
powershell -NoProfile -ExecutionPolicy Bypass -File "%~dp0Play_Showcase.ps1" -GameDirectory "%~1" -Preview
if errorlevel 1 pause
endlocal

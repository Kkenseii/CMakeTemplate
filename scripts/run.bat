@echo off
cd /d "%~dp0.."

if not exist build mkdir build
cd build

cmake ..
if errorlevel 1 (
    echo cmake failed
    pause
    exit /b 1
)

for %%f in (*.sln) do start "" "%%f"
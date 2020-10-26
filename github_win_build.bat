@echo off
gcc -Wall -Werror -o%GITHUB_WORKSPACE%\app.exe ./main.c
REM gcc -Wall -Werror -oapp.exe ./main.c

echo "======================"
SET
echo "======================"
dir %GITHUB_WORKSPACE%


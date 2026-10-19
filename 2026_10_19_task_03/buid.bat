@echo off
chcp 65001 >nul
g++ main.cpp menu_items.cpp menu_functions.cpp -o task6.exe -finput-charset=UTF-8 -fexec-charset=UTF-8
task6.exe
pause
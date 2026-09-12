@echo off
setlocal EnableDelayedExpansion

rem --- Настройки (аналог переменных в bash) ---
set "MAIN=hello_world.cpp"
set "APP=app.exe"

rem --- Удаление старого файла, если он существует (аналог [ -f "$APP" ] && rm "$APP") ---
if exist "%APP%" del /f /q "%APP%"

rem --- Компиляция с указанием кодировки CP866 (OEM 866) 
rem В g++ под MinGW/MSYS2 флаг остается тем же, но синтаксис вызова меняется на стандартный CMD.
g++ -fexec-charset=CP866 "%MAIN%" -o "%APP%"

rem Проверка успешности компиляции
if errorlevel 1 (
    echo Ошибка компиляции!
    exit /b 1
)

rem --- Запуск программы (. заменяется на вызов .exe напрямую или через .\ ) ---
"%APP%"
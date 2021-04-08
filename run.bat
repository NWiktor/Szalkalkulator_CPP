ECHO OFF
chcp 65001
cls

rem g++ may be used for only C++ handling of files
rem gcc

rem when compiler succeds runs .exe
g++ stock_cutting_calculator.cpp ^
optimizer.cpp ^
-o stock_cutting_calculator.exe && ^
stock_cutting_calculator.exe

PAUSE

@echo off
FOR /f %%i IN ('dir "C:\Users\%USERNAME%\AppData\Local\Arma 3\*.rpt" /o:d /b') DO (set LAST=%%i)
start notepad++ "C:\Users\%USERNAME%\AppData\Local\Arma 3\%LAST%"
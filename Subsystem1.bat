
call "setup_mingw.bat"

cd .

if "%1"=="" ("C:\Matlab\bin\win64\gmake"  -f Subsystem1.mk all) else ("C:\Matlab\bin\win64\gmake"  -f Subsystem1.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1
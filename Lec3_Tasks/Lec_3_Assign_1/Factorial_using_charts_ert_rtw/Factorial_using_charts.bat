call "%VS100COMNTOOLS%..\..\VC\vcvarsall.bat" AMD64

cd .

if "%1"=="" (nmake -f Factorial_using_charts.mk all) else (nmake -f Factorial_using_charts.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
An_error_occurred_during_the_call_to_make

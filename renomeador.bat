@echo off
setlocal EnableDelayedExpansion

echo ====================================
echo      RENOMEADOR DE ARQUIVOS
echo ====================================
echo.

set /p pasta=Digite o caminho inicial da pasta: 

if not exist "%pasta%" (
    echo Pasta nao encontrada!
    pause
    exit
)

:escolherPasta
cls
echo ====================================
echo PASTA ATUAL
echo ====================================
echo.
echo %pasta%
echo.

echo 1 - Usar esta pasta
echo 2 - Entrar em uma subpasta
echo 3 - Cancelar
echo.

set /p opcao=Escolha uma opcao: 

if "%opcao%"=="1" goto renomear
if "%opcao%"=="2" goto subpasta
if "%opcao%"=="3" exit

goto escolherPasta

:subpasta
echo.
echo Subpastas encontradas:
dir "%pasta%" /ad /b
echo.

set /p nomeSub=Digite o nome da subpasta: 

if exist "%pasta%\%nomeSub%" (
    set "pasta=%pasta%\%nomeSub%"
    goto escolherPasta
) else (
    echo.
    echo Subpasta nao encontrada!
    pause
    goto escolherPasta
)

:renomear
pushd "%pasta%"

set contador=1

for %%f in (*.*) do (
    ren "%%f" "Arquivo_!contador!%%~xf"
    set /a contador+=1
)

popd

echo.
echo Arquivos renomeados com sucesso!
pause
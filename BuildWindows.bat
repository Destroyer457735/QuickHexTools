cmake -DCMAKE_PREFIX_PATH=C:\Qt\6.11.2\mingw_64 -S ./ -B ./builds/Windows -G "MinGW Makefiles"
cd ./builds/Windows/
make
C:\Qt\6.11.2\mingw_64\bin\windeployqt.exe ./
PowerShell -Command "Add-Type -AssemblyName PresentationFramework;[System.Windows.MessageBox]::Show('Finished!')"

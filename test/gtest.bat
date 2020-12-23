SET MCU_VERSION_MAJOR=3
SET MCU_VERSION_MINOR=0
SET MCU_VERSION_PATCH=40



IF EXIST .\build RMDIR /s /q build
mkdir build
cd build
  
REM Checkout files  
echo on
rem cmake .. -G "MinGW Makefiles"
cmake ..
cmake --build .
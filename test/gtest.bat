SET MCU_VERSION_MAJOR=3
SET MCU_VERSION_MINOR=0
SET MCU_VERSION_PATCH=40



IF EXIST .\build RMDIR /s /q build
mkdir build
cd build
  
REM Checkout files  
echo on
cmake .. -G "MinGW Makefiles"
REM cmake ..
cmake --build .
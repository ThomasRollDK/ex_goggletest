SET MCU_VERSION_MAJOR=3
SET MCU_VERSION_MINOR=0
SET MCU_VERSION_PATCH=40



IF EXIST .\_build RMDIR /s /q _build
mkdir _build
cd _build
  
REM Checkout files  
echo on
REM cmake .. -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug -DBUILD_GMOCK=On -DGOOGLETEST_TOOLS=On
cmake .. -G "MinGW Makefiles" -DGOOGLETEST_TOOLS=Off
cmake --build .
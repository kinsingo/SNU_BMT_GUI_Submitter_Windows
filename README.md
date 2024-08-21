
## Submitter User Guide
1. Implement the overridden functions in the `Virtual_Submitter_Implementation` class within `main.cpp`  
   : Ensure that these functions are implemented to operate correctly in the intended calculator (e.g., CPU, GPU, NPU).

2. Open the Window terminal  
  2.1) Open PowerShell  
  2.2) Navigate to the build directory using the command: [cd build]  

3. Generate the Ninja build system  
  3.1) If ninja is not installed, Run the command [sudo apt-get install ninja-build]  
  3.2) Run the command [cmake -G "Ninja" ..] to execute CMake in the current directory (usually the build directory). This command will generate the Ninja build system based on the CMakeLists.txt file located in the parent directory. Once successfully executed, the project will be ready to be built using Ninja.

7. Build the project  
   : Run [cmake --build .] to build the project using the build system configured by CMake in the current directory. This will compile the project and create the executable SNU_BMT_GUI_Submitter.exe in the build folder.

## Window PowerShell Example
```powershell
1. PS C:\Users\jongh> cd D:\QT_CPP_CMake\SNU_BMT_GUI_Submitter_Windows
2. PS D:\QT_CPP_CMake\SNU_BMT_GUI_Submitter_Windows> cd build
3. PS D:\QT_CPP_CMake\SNU_BMT_GUI_Submitter_Windows\build> sudo apt-get install ninja-build
4. PS D:\QT_CPP_CMake\SNU_BMT_GUI_Submitter_Windows\build> cmake -G "Ninja" ..
5. PS D:\QT_CPP_CMake\SNU_BMT_GUI_Submitter_Windows\build> cmake --build .
6. PS D:\QT_CPP_CMake\SNU_BMT_GUI_Submitter_Windows\build> .\SNU_BMT_GUI_Submitter.exe

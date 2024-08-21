## Submitter User Guide
**1. Implementation**
   1) Implement the overridden functions in the `Virtual_Submitter_Implementation` class within `main.cpp`  
   : Ensure that these functions are implemented to operate correctly in the intended calculator (e.g., CPU, GPU, NPU).

**2. Build**  
   1) Open the Window terminal  
  -. Open PowerShell   
  -. Navigate to the build directory using the command: [cd build]
   2) Generate the Ninja build system  
  -. If Ninja is not installed, download and install the Ninja build system by downloading the [ninja-win.zip] file from the official Ninja releases page (https://github.com/ninja-build/ninja/releases)  
  -. Run the command [cmake -G "Ninja" ..] to execute CMake in the current directory (usually the build directory). This command will generate the Ninja build system based on the CMakeLists.txt file located in the parent directory. Once successfully executed, the project will be ready to be built using Ninja.
   3) Build the project  
   : Run [cmake --build .] to build the project using the build system configured by CMake in the current directory. This will compile the project and create the executable SNU_BMT_GUI_Submitter.exe in the build folder.

## Build Example (Window PowerShell)
```powershell
PS C:\Users\jongh> cd D:\QT_CPP_CMake\SNU_BMT_GUI_Submitter_Windows
PS D:\QT_CPP_CMake\SNU_BMT_GUI_Submitter_Windows> cd build
PS D:\QT_CPP_CMake\SNU_BMT_GUI_Submitter_Windows\build> cmake -G "Ninja" ..
PS D:\QT_CPP_CMake\SNU_BMT_GUI_Submitter_Windows\build> cmake --build .
PS D:\QT_CPP_CMake\SNU_BMT_GUI_Submitter_Windows\build> .\SNU_BMT_GUI_Submitter.exe


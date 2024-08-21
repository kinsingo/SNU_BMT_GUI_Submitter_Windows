## Submitter User Guide
**0. Prerequisites**
  1) Build System Set-up (MinGW-w64 Installation Guide for Windows)
     ## 1. Visit the WinLibs Website
     - Go to the [WinLibs official website](https://www.winlibs.com/).
     ## 2. Download MinGW-w64
      - On the main page, locate the latest version of the **MinGW-w64** build. This build includes the GCC (GNU Compiler Collection) for Windows.
      - Choose the file that matches your system architecture: **x86_64** (64-bit), **i686** (32-bit)
      - For example, if you are using a 64-bit Windows system, select the `winlibs-x86_64-posix-seh-gcc-14.2.0-llvm-18.1.8-mingw-w64ucrt-12.0.0-r1.zip` file.
     ## 3. Extract the Files
      - The directory where you extract the files will be your MinGW installation directory, e.g., `C:\mingw64` or `C:\mingw32`.

## 4. Set Up Environment Variables

To use MinGW from the command prompt easily, add its `bin` directory to the system `PATH` environment variable.

### Steps:

1. Open the Start menu and search for "Edit the system environment variables."
2. In the "System Properties" window, click the "Environment Variables..." button.
3. In the "System variables" section, select `Path` and click "Edit...".
4. Click "New" and add the path to the `bin` directory of MinGW:
   - `C:\mingw64\bin` (for 64-bit)
   - `C:\mingw32\bin` (for 32-bit)
5. Click "OK" to close all windows and save the changes.

## 5. Verify the MinGW Installation

- Open a command prompt.
- Type the following command to verify that MinGW is installed correctly:

  ```bash
  gcc --version



**1. Implementation**
   1) Implement the overridden functions in the `Virtual_Submitter_Implementation` class within `main.cpp`  
   : Ensure that these functions are implemented to operate correctly in the intended calculator (e.g., CPU, GPU, NPU).

**2. Build**  
   1) Open the Window terminal  
  -. Open PowerShell   
  -. Navigate to the build directory using the command: [cd build]
   2) Generate the Ninja build system using cmake  
  -. If cmake is not installed, download and install the cmake by downloading the [cmake-3.30.2-windows-x86_64.msi] file from the official Ninja releases page (https://cmake.org/download/). During the installation, select the option [Add CMake to the system PATH for all users]. When download is finished, restart PowerShell and type [cmake --version] to verify that CMake has been installed correctly.  
  -. If Ninja is not installed, download and install the Ninja build system by downloading the [ninja-win.zip] file from the official Ninja releases page (https://github.com/ninja-build/ninja/releases)  
  -. Run the command [cmake -G "Ninja" ..] to execute CMake in the current directory (usually the build directory). This command will generate the Ninja build system based on the CMakeLists.txt file located in the parent directory. Once successfully executed, the project will be ready to be built using Ninja.
   4) Build the project  
   : Run [cmake --build .] to build the project using the build system configured by CMake in the current directory. This will compile the project and create the executable SNU_BMT_GUI_Submitter.exe in the build folder.

## Build Example (Window PowerShell)
```powershell
PS C:\Users\jongh> cd D:\QT_CPP_CMake\SNU_BMT_GUI_Submitter_Windows
PS D:\QT_CPP_CMake\SNU_BMT_GUI_Submitter_Windows> cd build
PS D:\QT_CPP_CMake\SNU_BMT_GUI_Submitter_Windows\build> cmake -G "Ninja" ..
PS D:\QT_CPP_CMake\SNU_BMT_GUI_Submitter_Windows\build> cmake --build .
PS D:\QT_CPP_CMake\SNU_BMT_GUI_Submitter_Windows\build> .\SNU_BMT_GUI_Submitter.exe


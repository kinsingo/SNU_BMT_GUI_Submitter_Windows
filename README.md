## Submitter User Guide Steps
Step1) Build System Set-up  
Step2) Interface Implementation  
Step3) Build and Start BMT  
      
## Step1) Build System Set-up (MinGW-w64 Installation Guide for Windows)
**1. Visit the WinLibs Website**  
- Go to the [WinLibs official website](https://www.winlibs.com/).  

**2. Download MinGW-w64**  
- On the main page, locate the latest version of the **MinGW-w64** build. This build includes the GCC (GNU Compiler Collection) for Windows.  
- Choose the file that matches your system architecture: **x86_64** (64-bit), **i686** (32-bit)  
- For example, if you are using a 64-bit Windows system, select the `winlibs-x86_64-posix-seh-gcc-14.2.0-llvm-18.1.8-mingw-w64ucrt-12.0.0-r1.zip` file.  
     
**3. Extract the Files**  
- The directory where you extract the files will be your MinGW installation directory, e.g., `C:\mingw64`(for 64-bit) or `C:\mingw32`(for 32-bit).   
     
**4. Set Up Environment Variables**   
- To use MinGW from the command prompt easily, add its `bin` directory to the system `PATH` environment variable.    
  1. Open the Start menu and search for "Edit the system environment variables."  
  2. In the "System Properties" window, click the "Environment Variables..." button.  
  3. In the "System variables" section, select `Path` and click "Edit...".  
  4. Click "New" and add the path to the `bin` directory of MinGW: e.g., `C:\mingw64\bin`(for 64-bit) or `C:\mingw32\bin`(for 32-bit)
  5. Click "OK" to close all windows and save the changes.

**5. Verify the MinGW Installation**
- Reopen PowerShell 
- Type the following command to verify that MinGW is installed correctly:
  ```powershell
  gcc --version
  ```

## Step2) Interface Implementation
- Implement the overridden functions in the `Virtual_Submitter_Implementation` class within `main.cpp`  
: Ensure that these functions are implemented to operate correctly in the intended calculator (e.g., CPU, GPU, NPU).

## Step3) Build and Start BMT
**1. Open the Window terminal**  
  - Clone and navigate to the build directory using the following command
    ```powershell
    git clone https://github.com/kinsingo/SNU_BMT_GUI_Submitter_Linux.git
    cd SNU_BMT_GUI_Submitter_Windows\build
    ```

**2. Generate the Ninja build system using cmake**  
  - Run the following command to remove existing cache  
    ```powershell
    Remove-Item -Recurse -Force CMakeCache.txt, CMakeFiles
    ```
  - Run the following command to execute CMake in the current directory (usually the build directory). This command will generate the Ninja build system based on the CMakeLists.txt file located in the parent directory. Once successfully executed, the project will be ready to be built using Ninja.
    ```powershell
    cmake -G "Ninja" ..
    ```

**3. Build the project**  
  - Run the following command to build the project using the build system configured by CMake in the current directory. This will compile the project and create the executable SNU_BMT_GUI_Submitter.exe in the build folder.
    ```powershell
    cmake --build .
    ```

**4. Start builed BMT GUI**  
  - Run the following command to build the project using the build system configured by CMake in the current directory. This will compile the project and create the executable SNU_BMT_GUI_Submitter.exe in the build folder.
    ```powershell
    .\SNU_BMT_GUI_Submitter.exe
    ```

**build and start program example**
```powershell
PS C:\Users\jongh> cd D:\SNU_BMT_GUI_Submitter_Windows\build
PS D:\SNU_BMT_GUI_Submitter_Windows\build> Remove-Item -Recurse -Force CMakeCache.txt, CMakeFiles
PS D:\SNU_BMT_GUI_Submitter_Windows\build> cmake -G "Ninja" ..
PS D:\SNU_BMT_GUI_Submitter_Windows\build> cmake --build .
PS D:\SNU_BMT_GUI_Submitter_Windows\build> .\SNU_BMT_GUI_Submitter.exe
```


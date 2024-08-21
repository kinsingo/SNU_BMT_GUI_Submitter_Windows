
[Submitter User Guide]
1. Implement the overridden functions in the Virtual_Submitter_Implementation class within main.cpp:
Ensure that these functions are implemented to operate correctly on the intended calculator (e.g., CPU, GPU, NPU).

2. Open the terminal:
  2.1) For Windows users: Open PowerShell / For Linux users: Open the terminal (shell).
  2.2) Navigate to the build directory using the command: [cd build]

3. Generate the Ninja build system:
Run the command [cmake -G "Ninja" ..] to execute CMake in the current directory (usually the build directory). This command will generate the Ninja build system based on the CMakeLists.txt file located in the parent directory. Once successfully executed, the project will be ready to be built using Ninja.

4. Build the project:
Run [cmake --build .] to build the project using the build system configured by CMake in the current directory. This will compile the project and create the executable SNU_BMT_GUI_Submitter.exe in the build folder.

[Window PowerShell Example]
1. PS C:\Users\jongh> cd D:\QT_CPP_CMake\SNU_BMT_GUI_Submitter_Windows
2. PS D:\QT_CPP_CMake\SNU_BMT_GUI_Submitter_Windows> cd build
3. PS D:\QT_CPP_CMake\SNU_BMT_GUI_Submitter_Windows\build> cmake -G "Ninja" ..
-- Configuring done (0.9s)
-- Generating done (0.4s)
-- Build files have been written to: D:/QT_CPP_CMake/SNU_BMT_GUI_Submitter_Windows/build
4. PS D:\QT_CPP_CMake\SNU_BMT_GUI_Submitter_Windows\build> cmake --build .
[2/2] Linking CXX executable SNU_BMT_GUI_Submitter.exe
5. PS D:\QT_CPP_CMake\SNU_BMT_GUI_Submitter_Windows\build> .\SNU_BMT_GUI_Submitter.exe

cmake_minimum_required(VERSION 3.16)

project(SNU_BMT_GUI_Submitter_App VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJECT_SOURCES
        main.cpp
        stats.h
        stats.cpp
        supermath.h
        supermath.cpp)

# Create the executable
add_executable(SNU_BMT_GUI_Submitter ${PROJECT_SOURCES})

# Add the directory where the libraries are located
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)
target_include_directories(SNU_BMT_GUI_Submitter PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Link the libraries to the executable
target_link_libraries(SNU_BMT_GUI_Submitter PUBLIC SNU_AI_BMT_GUI SNU_AI_BMT_GUI_Library)


#cmake_minimum_required(VERSION 3.20)
#project(Ep009_App)
#
##The math library
#add_library(sjh_math STATIC source/supermath.cpp)
#target_include_directories(sjh_math PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
#
##The stats library
#add_library(sjh_stats STATIC source/stats.cpp)
#target_include_directories(sjh_stats PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
#target_link_libraries(sjh_stats PUBLIC sjh_math)
#
##The excutable target
#add_executable(Ep009_SW main.cpp)
#target_link_libraries(Ep009_SW PUBLIC sjh_stats)
 cmake_minimum_required(VERSION 3.5)

project(HelloApp
        VERSION 0.0.1
        DESCRIPTION "Hello World App"
        LANGUAGES CXX)   


# GLOBING
# file(GLOB_RECURCE SOURCE_FILES src/*.cpp)
# add_executable(HelloAppBinary main.cpp &{SOURCE_FILES} )

# Target

add_library(feline STATIC src/feline.cpp)
target_include_directories(feline PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_features(feline PUBLIC cxx_std_20)



add_executable(HelloAppBinary   main.cpp src/dog.cpp src/animal.cpp)

target_compile_features(HelloAppBinary PRIVATE cxx_std_20)
target_include_directories(HelloAppBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(HelloAppBinary PUBLIC feline)
cmake_minimum_required(VERSION 3.14)
project(quantization-engine)

# 1. Include the FetchContent module
include(FetchContent)

# 2. Tell CMake where to download Eigen and which version to get
FetchContent_Declare(
    eigen
    GIT_REPOSITORY https://gitlab.com/libeigen/eigen.git
    GIT_TAG        3.4.0  # You can change this to the version you need
)

# 3. Make Eigen available to your project
FetchContent_MakeAvailable(eigen)


# 4. Create your executable
add_executable(engine src/testbed.cpp)

target_include_directories(engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)



# 5. Link Eigen to your executable (this automatically handles include paths)
target_link_libraries(engine PRIVATE Eigen3::Eigen)
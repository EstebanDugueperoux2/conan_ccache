cmake_minimum_required(VERSION 3.15)
project(conan_cache CXX)



add_executable(conan_cache src/conan_cache.cpp src/main.cpp)



install(TARGETS conan_cache DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )

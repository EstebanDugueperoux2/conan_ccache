#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define CONAN_CACHE_EXPORT __declspec(dllexport)
#else
  #define CONAN_CACHE_EXPORT
#endif

CONAN_CACHE_EXPORT void conan_cache();
CONAN_CACHE_EXPORT void conan_cache_print_vector(const std::vector<std::string> &strings);

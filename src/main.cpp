#include "conan_cache.h"
#include <vector>
#include <string>

int main() {
    conan_cache();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    conan_cache_print_vector(vec);
}

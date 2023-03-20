#include "common.h"

bool if_exists(const std::string& name) {
    std::ifstream f(name.c_str());
    return f.good();
}

std::ifstream open_file(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        exit(1);
    }
    return file;
}

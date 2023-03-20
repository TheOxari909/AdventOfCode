#ifndef COMMON_H
#define COMMON_H

#include <fstream>
#include <iostream>
#include <string>

bool if_exists(const std::string& name);
std::ifstream open_file(const std::string& filename);

#endif

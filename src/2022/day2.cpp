#include "day2.h"
#include "common.h"

const std::string filename = "../input/day2.txt";

void day2part1() {
    std::ifstream input = open_file(filename);

    for (std::string line; getline(input, line); ) {
        char first = static_cast<char>(line.front());
        char last = static_cast<char>(line.back());
        
        std::cout << first << last << '\n';
    }
}

void day2part2() {
    return; 
}

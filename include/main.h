#ifndef MAIN_H
#define MAIN_H

#include <string>
#include <vector>
#include "problems.h"

// Define the function signature for each Advent of Code problem
using AoCFunction = void(*)();

struct AoCProblem {
    std::string name;
    AoCFunction function;
};

const std::vector<AoCProblem> problems {
    {"2022-d1-p1", &day1part1},
    {"2022-d1-p2", &day1part2},
    {"2022-d2-p1", &day2part1},
    {"2022-d2-p1", &day2part2},
};

int main(int argc, char** argv);

#endif /* MAIN_H */

#include "day1.h"
#include "common.h"
#include <numeric>

std::array<int, 3> loop_through() {
    int highest{ 0 };
    int second_highest{ 0 };
    int third_highest{ 0 };
    int to_compare{ };

    std::string filename{ if_exists("../input/day1.txt") ? "../input/day1.txt" : "../testinput/day1.txt" };

    std::ifstream input = open_file(filename);

    for ( std::string line; getline( input, line ); ) {
        if (!line.empty()) {
            to_compare += std::stoi(line);
            continue;
        }

        if (to_compare > highest) { 
            third_highest = second_highest;
            second_highest = highest;
            highest = to_compare;
        } else if (to_compare > second_highest) {
            third_highest = second_highest;
            second_highest = to_compare;
        } else if (to_compare > third_highest) third_highest = to_compare;

        to_compare = 0;
    }

    input.close();

    std::array<int, 3> top_highest_three = {highest, second_highest, third_highest}; 

    return top_highest_three;
}

void day1part1() {
    std::array<int, 3> highest_values = loop_through();

    std::cout << "Elf with most calories has: " << '\n' 
        << highest_values[0] << '\n';
}

void day1part2(){
    std::array<int, 3> highest_values = loop_through();
    int together = std::accumulate(highest_values.begin(), highest_values.end(), 0);

    std::cout << "3 elves with most calories, calories combined:" << '\n'
        << together << '\n';
}


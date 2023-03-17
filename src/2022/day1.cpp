#include "../../include/day1.h"
#include "../../include/common.h"

const std::string filename = "../src/2022/day1input.txt";

void day1part1() {
    std::ifstream input = open_file(filename);

    int highest_calories{ 0 };
    int to_compare{ };

    for( std::string line; getline( input, line ); )
    {
        if (line[0] != 0) {
            to_compare += std::stoi(line);
            continue;
        };

        if (to_compare > highest_calories)
            highest_calories = to_compare;

        to_compare = 0;
    }

    std::cout << highest_calories << '\n';

    input.close();
}

void day1part2(){
    int highest{ 0 };
    int second_highest{ 0 };
    int third_highest{ 0 };
    int to_compare{ };


    std::ifstream input = open_file(filename);

    for ( std::string line; getline( input, line ); ) {
        if (line[0] != 0) {
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

    std::cout << highest << '\n' << second_highest << '\n' << third_highest << '\n';
    std::cout << highest + second_highest + third_highest << '\n';
    
    input.close();
}


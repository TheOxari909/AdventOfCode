#include "main.h"
#include "problems.h"
#include <iostream>
#include <vector>
#include <string>
#include <chrono>

int main(int argc, char** argv) {
    if (argc == 1) {
        std::cout << "Available problems:" << std::endl;
        for (auto& problem : problems) {
            std::cout << problem.name << std::endl;
        }
        return 0;
    }

    for (int i = 1; i < argc; i++) {

        bool problem_found = false;
        for (auto& problem : problems) {
            if (problem.name == argv[i]) {
                problem_found = true;
                std::cout << "Running " << problem.name << "..." << std::endl;

                auto start = std::chrono::high_resolution_clock::now();

                problem.function();

                auto end = std::chrono::high_resolution_clock::now();
                auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
                std::cout << "Elapsed time: " << duration << " ms" << std::endl;

                break;
            }
        }

        if (!problem_found) {
            std::cout << "Problem not found: " << argv[i] << std::endl;
        }
    }

    return 0;
}


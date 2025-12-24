#ifndef TSP_H
#define TSP_H

#include <vector>

// 1. Define the struct so both tsp.cpp and main.cpp can see it
struct TSPResult {
    std::vector<int> tour;
    double total_cost;
};

// 2. Update the function prototype to return the struct
TSPResult solveTSP_greedy(const std::vector<std::vector<double>>& dist);

#endif
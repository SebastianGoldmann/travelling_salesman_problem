#include "tsp.h"
#include <iostream>




void testSolverConnection() {
    std::cout << "✅ Success: main.cpp is successfully linked to tsp.cpp!" << std::endl;
}





std::vector<int> solveTSP(const std::vector<std::vector<double>>& dist) {
    // we start at city 0


    std::vector<int> tour = {0};
    // take greedy shortest next city

    
    std::cout << "dist.size(): " << dist.size() << std::endl;
    
    for (int i = 0; i < dist.size(); i++){

        // init large distance
        int min_dist = 9999;
        
        for (int j = 0; j < dist.size(); j++)
        {
            // determine shorted city
            if (i != j && min_dist > dist[i][j])
            {
                //smaller distance found, overwrite
                int next_city = j;
                min_dist = dist[i][j];
            }
        }

        //short greedy distance found, update output
        tour.push_back(next_city);
    }

    return {0}; 
}


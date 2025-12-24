#include "tsp.h"
#include <iostream>
#include <algorithm>


std::vector<int> solveTSP_greedy(const std::vector<std::vector<double>>& dist) {
    // we start at city 0

    std::cout << "dist.size(): " << dist.size() << std::endl;
    
    std::vector<int> tour = {0};
    int counter = 0;

    // take greedy shortest next city
    while (dist.size() > tour.size())
    {    
        counter++;
        // init large distance
        int next_city;
        int min_dist = 9999;
        int current_city = tour.back();
        bool city_found = 0;

        for (int j = 0; j < dist.size(); j++)
        {
            // determine if city is closer to current closest
            if (current_city != j
                && min_dist > dist[current_city][j] 
                && std:: find(tour.begin(), tour.end(), j) == tour.end()) // not visited yet
            {
                //smaller distance found, overwrite
                next_city = j;
                min_dist = dist[current_city][j];
                city_found = 1;
            }
        }
        //short greedy distance found, update output
        std::cout << "from city: " << current_city << " next city: " << next_city << " with distance: " << dist[current_city][next_city] << std::endl;

        if (city_found)
        {
            tour.push_back(next_city);
            city_found = 0;
        }
        
       
        if (counter >= 100) {
            std::cout << "ERROR LOOPING INFINITE" << std::endl;
            break; // Exit the loop immediately
        }
    }

    // final city visited, add return
    tour.push_back(0);

    return tour; 
}


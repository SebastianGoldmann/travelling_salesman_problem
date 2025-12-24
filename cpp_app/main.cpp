#include <iostream>
#include <vector>
#include <algorithm> // Required for next_permutation
#include <climits>   // Required for INT_MAX
#include <cstdlib> // rand(), srand()
#include "tsp.h"

using namespace std;

// define number of cities
const int V = 4;

//create distance matrix
// Create a V x V matrix filled with 0.0
std::vector<std::vector<double>> arr(V, std::vector<double>(V, 0.0));


// generate a random distance matrix
int main() 
{
    srand(42);
    cout << "Number of cities in simulation: " << V << endl;

    cout << "Iniatlized empty matrix: " << endl;

        for(int a= 0; a  < V; a++)
        {
                for(int b=0; b<V; b++)
                {
                    cout << arr[a][b] << " ";
                }
            cout << endl;
        }

    cout << "Generating random numbers" << endl;

    for(int a=0; a< V; a++){
        for(int b=0; b< V; b++){
            arr[a][b] = rand() % 11;

            cout << arr[a][b] << " ";
        }
        cout << endl;
    }
    cout << "Distance matrix generated for " << V << " cities." << endl;

    // get greedy solution
    std::vector<int> resultRoute = solveTSP_greedy(arr);

    cout << "shortest path of the TSP greedy is: ";
    for (size_t i = 0; i < resultRoute.size(); ++i) {
        cout << resultRoute[i] << (i + 1 < resultRoute.size() ? " " : "");
    }
    cout << endl;

    return 0;
}

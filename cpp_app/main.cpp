#include <iostream>
#include <vector>
#include <algorithm> // Required for next_permutation
#include <climits>   // Required for INT_MAX
#include <cstdlib> // rand(), srand()

using namespace std;


// define number of cities
const int V = 4;

//create distance matrix
int arr[V][V] = {0};


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
    return 0;
}

//distance matrix is now created for a specific number of cities


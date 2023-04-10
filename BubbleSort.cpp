#include "BubbleSort.h"
#include <vector> 

// function that swaps the two elements
void BubbleSort::swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
// Bubble sort algorithm 
std::vector<int> BubbleSort::sort(std::vector<int> list)
{
    // find the size of vector 
    int n = list.size();

    // first for loop iteriates thorugh the entire loop
    for (int i = 0; i < n-1; i++)
    {
        // iteriates thorugh everyhting expect the already sorted ones
        for (int j = 0; j < n - 1; j++)
        {
            // if statement to check if element at j is more than element at j+1
            if (list.at(j) > list.at(j + 1))
            {
                // swap 
                swap(list.at(j), list.at(j + 1));
            }
        }
    }
    // return the vector 
    return list;
}
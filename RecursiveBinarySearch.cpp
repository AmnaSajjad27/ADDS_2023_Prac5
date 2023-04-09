#include "RecursiveBinarySearch.h"
#include <vector>

// Helper function 
bool RecursiveBinarySearch::helperfunction(std::vector<int> list, int target, int start, int end)
{
    // Error handling 
    if (start > end)
    {
        return false;
    }
    // Find the middle of the array
    int median = start + (end - start) / 2;
    // If we find the element we are looking for, we return the index
    if (list.at(median) == target)
    { 
        return true;
    }
    // If the element we are looking for has value less than the middle element
    // call binary search with the same starting point and an ending point one position less than the current middle index
    else if (list.at(median)  < target)
    {
        return helperfunction(list, target, median + 1, end);
    }
    // If the element we are looking for has a value greater than the middle element
    // call binary search with the same ending point and a starting point one greater than the current middle index
    else 
    {
        return helperfunction(list, target, start, median - 1);
    }
    // else we return false 
    return false;
}
// Search function 
bool RecursiveBinarySearch::search(std::vector<int> list, int target)
{
    // User only required to give the list and the item to be searched for 
    // We give the start index as 0 and end index as (size of array() - 1)
    return helperfunction(list, target, 0, list.size() - 1);
}
#ifndef RECURSIVE_BINARY_SEARCH
#define RECURSIVE_BINARY_SEARCH
#include <vector>

class RecursiveBinarySearch
{
    public:
    bool search(std::vector<int> list, int target);
    bool helperfunction(std::vector <int> list, int target, int start, int end);
};

#endif
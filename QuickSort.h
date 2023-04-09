#ifndef QUICKSORT
#define QUICKSORT

#include "Sort.h"
#include <vector>

class QuickSort:public Sort
{
    public:
    // virtual sort
    std::vector<int> sort(std::vector<int> list) override;
    std::vector<int> partitionfunction(std::vector<int> list, int smaller, int higher);
    std::vector<int> helperfunction(std::vector<int> list, int low, int high);
    void swap(int &a, int &b);

    private:
    int pivot = 0;
};

#endif
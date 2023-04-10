#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <vector>
#include "Sort.h"

class BubbleSort:public Sort
{
    public:
    
    // does this need override keyword
    std::vector<int> sort(std::vector<int> list) override;
    void swap(int &a, int &b);
};

#endif
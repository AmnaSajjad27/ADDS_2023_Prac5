#ifndef BUBBLESORT
#define BUBBLESORT

#include <vector>
#include "Sort.h"

class BubbleSort:public Sort
{
    public:
    
    virtual std::vector<int> sort(std::vector<int> list) override;
    void swap(int &a, int &b);
};

#endif
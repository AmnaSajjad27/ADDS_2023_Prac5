#ifndef BUBBLESORT
#define BUBBLESORT

#include <vector>
#include "Sort.h"

class BubbleSort:public Sort
{
    public:
    virtual std::vector <int> sort(std::vector<int> list);
    void swap(int &a, int &b);
};

#endif
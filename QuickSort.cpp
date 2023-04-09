#include "QuickSort.h"
#include <vector>
#include <iostream>

// function to swap the two elements 
void QuickSort::swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Partition function

std::vector<int> QuickSort::partitionfunction(std::vector<int> list, int low, int high)
{
    if ((high - low) > 2)
    {
        swap(list.at(low + 2), list.at(high));
    }

    int p = list.at(high);
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (list.at(j) < p)
        {
            i++;
            swap(list.at(i), list.at(j));
        }
    }
    swap(list.at(i + 1), list.at(high));
    this->pivot = i + 1;

    return list;
}

std::vector<int> QuickSort::helperfunction(std::vector<int> list, int low, int high)
{
    if (low >= high)
    {
        return list;
    }

    list = partitionfunction(list, low, high);
    list = helperfunction(list, low, this->pivot - 1);
    list = helperfunction(list, this->pivot + 1, high);

    return list;
}

std::vector<int> QuickSort::sort(std::vector<int> list)
{
    return helperfunction(list, 0, list.size() - 1);
}

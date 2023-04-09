#ifndef SORT
#define SORT

#include <vector> 

class Sort 
{
    public:
    // Pure virtual function Sort, implemented in each specific sorting algorithm 
    // virtual std::vector<int> sort(std::vector<int> list) = 0;
    // from piazza, define in .h file 

    virtual std::vector<int> sort(std::vector<int> list) = 0;
   //  std::vector<int> sort(std::vector<int> list);
};

#endif
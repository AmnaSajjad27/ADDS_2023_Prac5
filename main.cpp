#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() 
{
    // Create an object QuickSort 
    Sort* quickSort = new QuickSort();
    // Create an object BinarySearch 
    RecursiveBinarySearch* binarySearch = new RecursiveBinarySearch();

    // Vector to be sorted 
    vector<int> num;

    // Ask user for elements to be sorted 
    string str;
    getline(cin, str);

    stringstream ss(str);
    for (int i; ss >> i;) {
        num.push_back(i);
    }

    // Sort the elements using quicksort 
    num = quickSort->sort(num);
    // Search if "1" is in the elements, return true or false respecitively 
    if (binarySearch->search(num, 1)) cout << "true ";
    else cout << "false ";

    // output the sorted array
    int n = num.size();
    for (int i = 0; i < n; i++) {
        cout << num.at(i) << " ";
    }
    cout << endl;
}
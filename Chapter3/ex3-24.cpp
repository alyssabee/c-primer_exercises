// Ex3-24.cpp : Redo last exercise from 3.3.3 using iterators
//              (Sum each pair in series of ints. Sum first and last,
//              second and second to last, etc.
#include <iostream>
#include <vector>

using std::cout; using std::cin; using std::endl; using std::vector;

int main()
{
    vector<int> series{10, 20, 30, 40, 50, 60, 70, 80, 90};

    int first_sum = 0, second_sum = 0;
    for(auto it1 = series.cbegin(), it2 = series.cbegin() + 1;
        it2 != series.cend(); ++it1, ++it2)
        first_sum += *it1 + *it2;

    cout << endl << first_sum; 
   
    for(auto it1 = series.cbegin(), it2 = series.cend() - 1; 
        it1 < it2; ++it1, --it2)
        second_sum += *it1 + *it2;
    
    cout << endl << second_sum << endl;
 
    return 0;
}

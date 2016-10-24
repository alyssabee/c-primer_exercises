// Ex3-23.cpp : Create vector with 10 int elements. Use an 
//            : iterator to double each value and print. 
#include <iostream>
#include <vector> 
using std::cout; using std::endl; using std::vector; 

int main()
{
    vector<int> numbers{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    for(auto it = numbers.begin(); it != numbers.end(); ++it)
        cout << *it * 2 << endl; 
    return 0;
}

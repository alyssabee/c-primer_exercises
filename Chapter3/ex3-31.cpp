// Ex3-31.cpp : Create array of 10 ints and give each element
//              same value as its position in the array.
#include <iostream>
using std::cout; using std::endl; 

int main() 
{
    int numbers[10] = {};

    for(size_t i = 0; i < 10; i++)
        numbers[i] = i;

    for(auto i : numbers)
        cout << " " << i;

    cout << endl;
    return 0;
}

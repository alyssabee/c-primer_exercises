// Ex3-35.cpp : Write a program setting objects of an array
//            : to zero using pointers.
#include <iostream>
using std::cout; using std::endl;

int main()
{
    int numbers[5] = {1, 3, 4, 2, 1};

    for(auto *i = std::begin(numbers); i != std::end(numbers); i++)
        *i = 0;

    for(auto i : numbers)
        cout << " " << i;

    return 0;
}

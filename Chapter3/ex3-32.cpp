// Ex3-32.cpp : Use array from 3-31, copy into another array. 
//              Then rewrite using vectors.
#include <vector>
#include <iostream>
using std::cout; using std::endl; using std::vector; 

int main() 
{
    vector<int> numbers, numbers_copy;

    for(auto i = 0; i < 10; i++)
        numbers.push_back(i);

    for(auto i = 0; i < numbers.size(); i++)
        numbers_copy.push_back(numbers[i]);

    for(auto i : numbers_copy)
        cout << " " << i;
    return 0;



/*    int numbers[10] = {}, numbers_copy[10] = {};

    for(size_t i = 0; i < 10; i++)
        numbers[i] = i;

    for(size_t i = 0; i < 10; i++)
        numbers_copy[i] = numbers[i];

    for(auto i : numbers_copy)
        cout << " " << i;

    return 0;
*/
}

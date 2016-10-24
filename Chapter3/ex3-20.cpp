// Ex3-20.cpp : Read sequence of integers from input and store
//              in a vector, then print sum of each int pair.
//  Part2     : Change program to sum first and last element, 
//            : second and second to last element, etc. 
#include <iostream>
#include <vector>
using std::cout; using std::cin; using std::endl; using std::vector;
int main() 
{
    vector<int> numbers;
    int input;
    cout << endl;

    while(cin >> input) 
        numbers.push_back(input);

    for(decltype(numbers.size()) i = 0; i < (numbers.size() - 1); ++i) { 
        cout << numbers[i] + numbers[i + 1] << endl;  
    }

    for(decltype(numbers.size()) i = 0, j = numbers.size() - 1; i < j;
        ++i, --j) {
            cout << numbers[i] + numbers[j] << endl; 
    } 

    return 0; 
}


// Ex3-14 : Read sequence of ints from input and add to vector
// Ex3-15 : This program only needs rewritten to take string 
//          inputs, so it would be vector<string> strings, 
//          string input, and user prompt would reflect needing
//          strings for user input. 
#include <iostream> 
#include <vector>
using std::vector; using std::cin; using std::cout; using std::endl;
int main()
{
    vector<int> numbers;
    int input;
    cout << endl << "Please enter a sequence of numbers: " << endl;
    while (cin >> input) {
        numbers.push_back(input);
    }
    
    return 0;
}

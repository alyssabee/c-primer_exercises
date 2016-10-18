// Ex3-5 : Add strings entered by user and include spaces
#include <iostream>
using std::cout; using std::cin; using std::endl; using std::string;

int main() 
{
    string input, string_total; 

    while (cin >> input) {
        string_total += input + " ";
    }
    
    cout << endl << string_total << endl;
    return 0;
}

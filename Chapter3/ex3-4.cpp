// Ex3-4 : Compare 2 strings to determine which string is longer
// or if they are equal. 
#include <iostream>
using std::cout; using std::cin; using std::string; using std::endl;
int main()
{
    string input1, input2;

    cout << endl << "Please enter two strings: " << endl;
    cin >> input1 >> input2;
    
    if (input1.size() == input2.size()) {
        cout << endl << "Strings are equal length!" << endl;
    } else if (input1.size() > input2.size()) {
        cout << endl << input1 << " is longer than " << input2 << endl;
    } else if (input1.size() < input2.size()) {
        cout << endl << input1 << " is shorter than " << input2 << endl;
    }
    return 0; 
}

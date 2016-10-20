// Ex3-6 : Use a range for to change all characters
// in a string to X
// Ex3-7 : Modify 3-6 to use char for loop control
#include <iostream>
#include <cctype>
using std::cout; using std::cin; using std::string; using std::endl;

int main()
{
    string user_input;

    cout << "Please enter a string to be converted:" << endl;
    cin >> user_input;

    for (char &c : user_input) {
        c = 'X';
    }
    cout << endl << user_input;
    return 0;
}

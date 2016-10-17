// Ex3-2 : Read one word from input at a time. 
// First part of Ex3-2 was reading a line at a time.
// Used while (getline(cin, input))
#include <iostream>
using std::cout; using std::cin; using std::endl; using std::string;
int main()
{
    string input;

    while (cin >> input) {
        cout << endl << input;
    }
    return 0;
}

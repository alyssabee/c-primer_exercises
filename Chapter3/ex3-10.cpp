// Ex3-10 : Read string of characters including punctuation
// and output string with punctuation removed
#include <iostream>
#include <cctype>
using std::cout; using std::cin; using std::endl; using std::string;

int main()
{
    string user_input;
    cout << endl << "Please enter string of characters and punctuation: "
         << endl;
    cin >> user_input;

    for (auto &c : user_input) {
        if (!ispunct(c))
            cout << c; 
    } 
    
    return 0;
}

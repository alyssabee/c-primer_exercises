// Ex3-22.cpp : Revise the loop that printed the first paragraph in text to
//              instead change the elements in text that correspond to the //              first paragraph to all uppercase. After you’ve updated text//              , print its contents.
#include <iostream>
#include <string>
#include <vector>
using std::cout; using std::cin; using std::endl; 
using std::vector; using std::string;

int main()
{
    vector<string> text{"Test", "paragraph", "for", "ex", "3-22", ""};
    
    for(auto it = text.begin(); !it->empty() && it != text.end(); ++it)
        for(auto& c : *it)
            c = toupper(c);   

    cout << endl;
    for(auto s : text)
        cout << s << " ";

    return 0;
}

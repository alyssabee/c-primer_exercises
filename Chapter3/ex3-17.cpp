// Ex3-17.cpp : Read a sequence of words from cin and store
//              in a vector. Then convert all words to uppercase
//              and print 8 words to a line.
#include <iostream>
#include <vector>
#include <string>
using std::cout; using std::cin; using std::vector; 
using std::endl; using std::string;

int main()
{
    vector<string> words;
    string current;

    while(cin >> current)
        words.push_back(current);

    for(auto& s: words) {
        for(auto& c : s)
            c = toupper(c);
    }

    int word_count = 0;
    for(auto s : words) { 
        if(word_count % 8 == 0) // 8 words per line
            cout << endl;
        cout << s << " "; 
        ++word_count;
     
    } 
    cout << endl;
    return 0;
}

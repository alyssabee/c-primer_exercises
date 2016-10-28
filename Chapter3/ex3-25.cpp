// Ex3-25.cpp : Rewrite grades program to use iterators
#include <iostream>
#include <vector>
using std::cout; using std::cin; using std::vector; using std::endl;

int main()
{
    vector<unsigned> grades(11, 0);
    int input;
    
    cout << endl;
    
    while(cin >> input) {
        if(input <= 100) {
            auto it = grades.begin() + (input / 10); 
            ++*it;
        }
            
    }
    
    for(auto u : grades)
        cout << " " << u;

    cout << endl;
    
    return 0;
}

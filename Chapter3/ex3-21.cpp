// Ex3-21.cpp : Redo exercise 3-16 using iterators
#include <iostream>
#include <vector>
using std::cout; using std::cin; using std::endl; 
using std::string; using std::vector;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

   
    cout << endl <<  "v1 has " << v1.size() << " elements, they are: "; 
    for(auto it = v1.cbegin(); it != v1.cend(); ++it)
        cout << *it;

    cout << endl <<  "v2 has " << v2.size() << " elements, they are: "; 
    for(auto it = v2.cbegin(); it != v2.cend(); ++it)
        cout << *it;

    cout << endl <<  "v3 has " << v3.size() << " elements, they are: "; 
    for(auto it = v3.cbegin(); it != v3.cend(); ++it)
        cout << *it;

    cout << endl <<  "v4 has " << v4.size() << " elements, they are: "; 
    for(auto it = v4.cbegin(); it != v4.cend(); ++it)
        cout << *it;

    cout << endl <<  "v5 has " << v5.size() << " elements, they are: "; 
    for(auto it = v5.cbegin(); it != v5.cend(); ++it)
        cout << *it;

    cout << endl <<  "v6 has " << v6.size() << " elements, they are: "; 
    for(auto it = v6.cbegin(); it != v6.cend(); ++it)
        cout << *it;

    cout << endl <<  "v7 has " << v7.size() << " elements, they are: "; 
    for(auto it = v7.cbegin(); it != v7.cend(); ++it)
        cout << *it;
  
    return 0;
}

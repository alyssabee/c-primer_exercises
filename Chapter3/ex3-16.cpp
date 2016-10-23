// Ex3-16 : Create program to determine size and contents of
//          vectors from ex3-13, here:
//            vector<int> v1;
//            vector<int> v2(10);
//            vector<int> v3(10, 42);
//            vector<int> v4{10};
//            vector<int> v5{10, 42}
//            vector<string> v6{10};
//            vector<string> v7{10, "hi"};
#include <vector>
#include <iostream>
using std::vector; using std::cout; using std::endl;
int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<std::string> v6{10};
    vector<std::string> v7{10, "hi"};
    decltype(v1.size()) size = 0;
 
    cout << endl;
    cout << "Vector v1 has " << v1.size() << " elements "  
         <<  "and its contents are: ";
    for(auto i : v1)
        cout << i << " ";

    cout << endl;
    cout << "Vector v2 has" << v2.size() << " elements " 
         << "and its contents are: ";
    for(auto i : v2)
        cout << i << " ";
    
    cout << endl;
    cout << "Vector v3 has" << v3.size() << " elements " 
         << "and its contents are: ";
    for(auto i : v3)
        cout << i << " ";

    cout << endl;
    cout << "Vector v4 has" << v4.size() << " elements " 
         << "and its contents are: ";
    for(auto i : v4)
        cout << i << " ";
    
    cout << endl;
    cout << "Vector v5 has" << v5.size() << " elements " 
         << "and its contents are: ";
    for(auto i : v5)
        cout << i << " ";

    cout << endl;
    cout << "Vector v6 has" << v6.size() << " elements " 
         << "and its contents are: ";
    for(auto s : v6)
        cout << s << " ";
 
    cout << endl;
    cout << "Vector v7 has" << v7.size() << " elements " 
         << "and its contents are: ";
    for(auto s : v7)
        cout << s << " ";
  
    cout << endl;
    return 0;
         
}

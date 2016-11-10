// Ex3-39.cpp : Write a program to compare two strings, then 
//              compare two C style strings. 

#include <iostream>
#include <cstring>
using std::cout; using std::endl; using std::string; 

int main()
{
    string first("Hello");
    string second("Hi");

    cout << endl;
    if(first < second) cout << first << " is less than " << second;
    if(first > second) cout << first << " is greater than " << second;
    cout << endl;

    char cfirst[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char csecond[] = {'h', 'i', '\0'};

    cout << "The greater of the two strings is: " << endl;
    if(strcmp(cfirst, csecond) < 0) 
        for(auto c : csecond) cout << c;
    else for(auto c: cfirst) cout << c;

    return 0;
}

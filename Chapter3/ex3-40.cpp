// Ex3-40.cpp : Create 2 arrays from string literals and 
//              use strcat and strcpy to combine them into 3rd array.

#include <iostream>
#include <cstring>
using std::cout; using std::endl;

const char first[] = "A tale told";
const char second[] = " by an idiot.";

int main()
{
    constexpr size_t strsize = strlen(first) + strlen(second) + 1;

    char third[strsize];

    strcpy(third,first);
    strcat(third,second); 
    for(auto c : third) cout << c;

    return 0;

}

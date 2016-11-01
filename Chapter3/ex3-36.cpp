// Ex3-36.cpp : Write a program to compare two arrays for equality. 
//              Then another using two vectors.
#include <iostream>
#include <vector>

using std::cout; using std::endl; using std::vector;
using std::begin; using std::end;

int main()
{
    int arr1[] = {2, 1, 3, 4, 5, 1}, arr2[] = {1, 3, 4, 5, 1};
    bool arr_equal;

    int *p1 = arr1, *pend1 = end(arr1), *p2 = arr2, *pend2 = end(arr2);
        
    if((pend1 - p1) != (pend2 - p2)) {
        cout << endl << "Arrays are not equal";
    } else {
        while(p1 != pend1) {
            if(*p1 != *p2) {
                cout << endl << "Arrays are not equal";
                break;
            }
            ++p1, ++p2;
        }  
    }
// To compare two vectors, just check if v1 == v2. Array checking
// would be more straightforward with bool function, but as
// those haven't yet been introduced in book, I consider it off limits. 
    return 0;
}

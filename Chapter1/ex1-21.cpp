#include <iostream> 
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    std::cout << "Please enter two book transactions: " << std::endl;
    std::cin >> item1 >> item2;

    std::cout << std::endl << item1 + item2;

    return 0;


}

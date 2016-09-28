// Note: if statement serves purpose of initializing sum


#include <iostream>
#include "Sales_item.h"

int main() 
{

    Sales_item sum_of_transactions, book;

    std::cout << "Please enter a series of transactions with the same ISBN: " << std::endl;

    if (std::cin >> sum_of_transactions) {
        while (std::cin >> book) {
            sum_of_transactions += book;
        }
        std::cout << std::endl << sum_of_transactions;
    }
    return 0; 
}

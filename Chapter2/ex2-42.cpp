// Ex2-42
// Rewrite 2-41 using header file. Using BookData.h
#include <iostream>
#include "BookData.h"

int main()
{
    double revenue = 0;
    int total_units = 0;
    BookData book;

    std::cout << std::endl << "Please enter an ISBN: " << std::endl;
    std::cin >> book.isbn;
    
    std::cout << std::endl << "Please enter units sold and price"
              << "(Press control D when finished: ";

    while(std::cin >> book.units_sold >> book.price) {
        total_units += book.units_sold;
        revenue += book.price * book.units_sold;    
    }
    std::cout << std::endl << "Total sold and revenue: " << total_units
              << " " << revenue;

    return 0;
}

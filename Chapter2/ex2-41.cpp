#include <iostream>

struct BookData {
    std::string isbn; 
    int units_sold;
    double price; 

};

int main()
{
    BookData book;
    double revenue = 0;
    int total_units = 0;

    std::cout << std::endl << "Please enter an ISBN: " << std::endl;
    std::cin >> book.isbn;
    
    std::cout << std::endl << "Please enter units sold and price"
              << "(Press control D when finished: ";

    while(std::cin >> book.units_sold >> book.price) {
        total_units += book.units_sold;
        revenue += book.price;    
    }
    std::cout << std::endl << "Total sold and revenue: " << total_units
              << " " << revenue;

    return 0;
}

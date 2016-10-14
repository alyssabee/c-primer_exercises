// Ex2-41 Part 1: Rewrite earlier exercises using struct
// First part reads series of transactions from the same ISBN
// and sums them. 
#include <iostream>

struct BookData {
    std::string isbn; 
    int units_sold;
    double price; 
};

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

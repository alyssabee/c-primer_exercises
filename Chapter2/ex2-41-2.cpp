// Ex2-41 Part 2
// Part 2 reads series of ISBNs and totals revenue
// and units for each ISBN.
// Mostly functional, does not check for valid input 
// and formatting is off. 
#include <iostream>

struct BookData {
    std::string isbn;
    int units_sold;
    double price;
};

int main()
{
    BookData book_series;
    BookData book_transaction;

    std::cout << std::endl << "Please enter a series of ISBNs "
              << " as well as units sold and price for each: ";

    std::cin >> book_series.isbn
             >> book_series.units_sold
             >> book_series.price;
    double revenue = 0;
    int total_units = 0;

    while (std::cin >> book_transaction.isbn
                    >> book_transaction.units_sold
                    >> book_transaction.price) {
        if (book_series.isbn == book_transaction.isbn) {
            total_units += book_transaction.units_sold;
            revenue += book_transaction.price * 
                       book_transaction.units_sold;
        } else {
            std::cout << std::endl << book_transaction.isbn
                      << " Total units: " << total_units
                      << " Revene: " << revenue;
            total_units = 0;
            revenue = 0;
            book_series.isbn = book_transaction.isbn;
        }
    }    
    return 0;
}

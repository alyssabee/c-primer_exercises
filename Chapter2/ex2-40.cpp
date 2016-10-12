// Ex2-40.cpp
// Must compile with -std=c++11 
#include <iostream>

struct Book_Data {
    std::string book_name;
    int copies_sold;
    double price = 0.0;
};

int main()
{
    Book_Data book1;

    std::cout << book1.price;
    return 0;
}

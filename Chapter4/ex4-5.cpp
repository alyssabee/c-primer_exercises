// Ex4-4/Ex4-5 : Evaluate the expressions.
//        Assumptions before running: 91, -86, -18, 0,-2 
#include <iostream>

int main()
{
    int x = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
    int a = -30 * 3 + 21 / 5;
    int b = -30 + 3 * 21 / 5;
    int c = 30 / 3 * 21 % 5;
    int d = -30 / 3 * 21 % 4;

    std::cout << std::endl << "Expression (a) is equal to: " << a;
    std::cout << std::endl << "Expression (b) is equal to: " << b;
    std::cout << std::endl << "Expression (c) is equal to: " << c;
    std::cout << std::endl << "Expression (d) is equal to: " << d;
    std::cout << std::endl << "Expression (x) is equal to: " << x;


    return 0;
}

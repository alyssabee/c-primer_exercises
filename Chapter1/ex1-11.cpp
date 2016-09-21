// Ex 1-11
// I felt like it would be "cheating" to use an if-statement since it hasn't been
// introduced. Without the reset variable, the second while loop executes when it
// shouldn't. 

#include <iostream>

int main()
{
	int num1 = 0, num2 = 0, reset = 0;

	std::cout << "Please enter two numbers: " << std::endl;
	std::cin >> num1 >> num2;
	reset = num1;

	while(num1 < num2 + 1) {
		std::cout << std::endl << num1;
		++num1; 
	}

	num1 = reset;

	while(num1 > num2 - 1) {
		std::cout << std::endl << num1;
		--num1;
	} 
	return 0;
}

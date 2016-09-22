#include <iostream>

int main()
{
	int input = 0, sum = 0;

	std::cout << "Please enter numbers to be summed, when finished enter 'q' or Ctrl D:"
		  << std::endl;
	while(std::cin >> input) {
		sum += input;
	}
	std::cout << std::endl << "The sum is: " << sum << std::endl;

	return 0;
}

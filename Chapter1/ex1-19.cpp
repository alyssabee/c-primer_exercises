#include <iostream>

int main() 
{
	int num1 = 0, num2 = 0;
	std::cout << "Please enter two numbers: " << std::endl;
	std::cin >> num1 >> num2;

	if (num1 < num2) {
		while (num1 <= num2) {
			std::cout << num1 << " ";
			++num1;	
		}
	}
	else {
		while (num1 >= num2) {
			std::cout << num1 << " ";
			--num1;
		}
		
	}
	return 0;
}

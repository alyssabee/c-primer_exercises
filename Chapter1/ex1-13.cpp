// Rewrite exercises from 1.4.1 (1-9, 1-10) using for loops. Combing both into one file.
// 1-11 not included.  

#include <iostream>

int main()
{
	int sum = 0;
	for(int i = 50; i <= 100; ++i) {
		sum += i;
		std::cout << sum << " ";	
	}

	std::cout << std::endl;

	for(int i = 10; i >= 0; --i)
		std::cout << i << " ";
	
	std::cout << std::endl;

	
	return 0;

	
}

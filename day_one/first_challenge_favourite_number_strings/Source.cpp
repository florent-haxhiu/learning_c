#include <iostream>

int main() {
	
	int favourite_number;
	std::cout << "What is your favourite number: ";
	std::cin >> favourite_number;
	std::cout << "No way, that is my favourite number too" << std::endl;
	// So adding variables to outputs, you would need a <<
	std::cout << "No really, " << favourite_number << " is my favourite number too";
	return 0;

}
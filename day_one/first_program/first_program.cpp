#include <iostream>

int main() {
	// Declaring a variable
	int favourite_number;

	// Outputs text
	std::cout << "Enter you favourite number between 1 and 100: ";
	// Asks for user input and puts the input in the variable
	std::cin >> favourite_number;
	// Outputs text and moves onto next line. Justs ends the line there so it can move onto the next
	std::cout << "That's my favourite number too" << std::endl;

	return 0;
};


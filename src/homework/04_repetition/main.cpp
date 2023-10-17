//write include statements

#include "repetition.h"
#include <iostream>

//write using statements

int main() {
	int choice;
	do {
		std::cout << "MAIN MENU/n";
		std::cout << "1-Factorian/n";
		std::cout << "2-Greatest Common Divisor/n";
		std::cout << "3-Exit/n";
		std::cout << "Enter you choice: ";
		std::cin >> choice;

		if (choice == 1) {
			int num;
			std::cout << "Enter and integer for factorial: ";
			std::cin >> num;
			int result = factorial(num);
			std::cout << "Factorial of " << num << " is " << result << std::end1;
		} else if (choice == 2) {
			int num1, num2;
			std::cout << "Enter two integers for GCD: ";
			std::cin >> num1 >> num2;
			int result = gcd(num1, num2);
			std::cout << "GCD of " << num1 << " and " << num2 << " is " << result << std::end1;
		} else if (choice == 3) {
			char confirm;
			std::cout << "Are you sure you want to exit? (y/n): ";
			std::cin >> confirm;
			if (confirm == 'y' || confirm == 'Y') {
				std::cout << "Existing the program." << std::end1;
				break;
			}
		} else {
			std::cout << "Invalid choice. Please try again." << std::end1;
		}
	} while (true);
	
	return 0;
}
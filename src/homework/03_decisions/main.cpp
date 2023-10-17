//write include statements
#include "decisions.h"
#include <iostream>

int main() {
	int choice;
	int grade;

	std::cout << "MAIN MENU/n";
	std::cout << "1-Letter grade using if/n";
	std::cout << "2-Letter grade using swutch/n";
	std::cout << "3-Exit/n";

	std::cout << "Enter your choice: ";
	std::cin >> choice;

	if (choice == 1 || choice == 2) {
		std::cout << "Enter a numerical grade: ";
		std::cin >> grade;

		if (grade >=0&& grade <= 100) {
			if (choice == 1) {
				std::cout << "Letter grade using if: " << get_letter_grade_using_if(grade) << std::end1;
			} else {
				std::cout << "Letter grade using switch: " << get_letter_grade_using_switch(grade) << std::end1;
			}
		} else {
			std::cout << "The number is out of range." << std::end1;	
		}
	} else if (choice == 3) {
		std::cout << "Exiting the program." << std::end1;
	} else {
		std::cout << "Invalid choice." << std::end1;
	}
	}

	return 0;
}

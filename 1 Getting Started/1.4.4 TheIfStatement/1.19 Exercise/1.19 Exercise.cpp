// 1.19 Exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
* Revise the program you wrote for the exercises in 1.4.1 p.13
* that printed a range of numbers so that it handles input in which
* the first number is smaller than the second. 
* 
* Back in page 13, the textbook has not covered if statements. 
* Therefore, the program I wrote asked the user to input
* a small number first then a second larger number.
* If the users did not follow the prompt, the program would just end.
*/

#include <iostream>

int main() {
	int smallNumber = 0, bigNumber = 0;

	std::cout << "Enter two numbers in order to print all the numbers in between. "
		<< "Make sure the first number is smaller than the second number!" << std::endl;

	std::cin >> smallNumber >> bigNumber;

	if (smallNumber < bigNumber) {
		while (smallNumber <= bigNumber) {
			std::cout << smallNumber << std::endl;
			++smallNumber;
		}
	}
	else {
		std::cout << "You did not follow instructions!" << std::endl;
	}

	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

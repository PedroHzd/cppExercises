// 1.11 Exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
* Write a program that prompts the user for two integers. 
* Print each number in the range specified by those two integers.
*/

#include <iostream>

int main() {
	int smallNumber = 0, bigNumber = 0;

	std::cout << "Please enter two numbers."
		<< " Make sure to make the first number smaller than the second one" << std::endl;

	std::cin >> smallNumber >> bigNumber;

	std::cout << std::endl; // Using this to create a new empty line 

	while (smallNumber <= bigNumber) {
		std::cout << smallNumber << std::endl;
		++smallNumber;
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

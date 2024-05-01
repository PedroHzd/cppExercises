// 1.16 Exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
* Write your own version of a program that
* prints the sum of a set of integers read from cin
*/

#include <iostream>

int main() {

	int usersNumber = 0, summation = 0;
	while (std::cin >> usersNumber) {
		summation += usersNumber;
	}
	std::cout << "The total sum is " << summation << std::endl;
	return 0;
}

// It's basically the same thing from the textbook. 

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// 1.18 Exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
* Compile and run the program from this section giving it only equal values as input.
* Run it again giving it values in which no number is repeated. 
* 
* These questions are intended to double check your previous work on exercise 1.17.
*/

#include <iostream>

int main() {
	int currentValue = 0, value = 0;
	if (std::cin >> currentValue) {
		int count = 0;
		while (std::cin >> value) {
			if (value == currentValue) {
				++count;
			}
			else {
				std::cout << currentValue << " occurs "
					<< count << " times " << std::endl;
				currentValue = value;
				count = 1;
			}
		}
		std::cout << currentValue << " occurs "
			<< count << " times " << std::endl;
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

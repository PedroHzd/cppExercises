// 1.17 Exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
* What happens in the program presented in this section if the input values are all equal?
* What if there are no duplicated values?
* 
* If all the inputs are equal, then the while loop is never going to terminate. 
* It's going to keep count until the user enters a different number or 
* enters something that is not an integer.
* 
* If all input are different, then the else statement will always trigger.
* "Number occurs 1 times" <- this will always show up, if there are no duplicated values.
*/

#include <iostream>

int main() {
	int currentValue = 0, value = 0;
	if (std::cin >> currentValue) {
		int count = 1;
		while (std::cin >> value) {
			if (value == currentValue) {
				++count;
			}
			else {
				std::cout << currentValue << " occurs " << count
					<< " times " << std::endl;
				currentValue = value;
				count = 1;
			}
		}
		std::cout << currentValue << " occurs " << count
			<< " times " << std::endl;
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

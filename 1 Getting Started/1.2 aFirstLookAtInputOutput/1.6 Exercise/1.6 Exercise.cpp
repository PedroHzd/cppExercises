// 1.6 Exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
* Explain whether the following program fragment is legal. lines 19 - 21
* If the program is legal, what does it do?
* If the program is not legal, why not?
* How would you fix it? 
*/

#include <iostream>

int main() {

	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;

	std::cin >> v1 >> v2;

	std::cout << "The sum of " << v1;
	<< " and " << v2;
	<< " is " << v1 + v2 << << std::endl;

	/* The problem here are the semicolons placed on line 19 and 20.
	* The << operator returns the left hand operand allowing to chain different outputs.
	* Once the semicolon is place, the statement ends.
	* This prevent the << operator to chain to the other operands. 
	* Removing the semicolons in line 19 and 20 allows the code to run properly. 
	*/

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

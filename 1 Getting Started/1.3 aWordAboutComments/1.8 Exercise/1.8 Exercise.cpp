// 1.8 Exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
* Indicate which, if any of the following output statements are legal
* After you've predicted what will happen, test your answers by compiling a program
* with each of tehse statement. Corrent any errors you encounter.
*/

#include <iostream>

int main() {
	std::cout << "/*"; //legal

	std::cout << "*/"; // legal

	std::cout << /* "*/" */"; //Not legal corrected by adding a " at the end of the statement

	std::cout << /* "*/" /* "/*" */; // I thought this was illegal but it's okay to compile. 
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

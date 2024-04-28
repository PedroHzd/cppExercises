// 1.14 Exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
* Compare and contrast the loops that used a for with those using a while. 
* Are there advantages or disadvantages to using either form?
*/

/*
* When using a while loop, the variable declaration happens before the loop starts.
* However, the variable declaration in a for loop happens within the conditional statement. 
* 
* The for loop is better used when the number of iterations is known. 
* On the other hand, a while loop is best suited when you don't know how many times to iterate. 
* 
* In a while loop, the variable used in the conditional statement can be used outside the loop.
* This is not the case in a for loop.
* The variable used in the conditional statement can only be used within the for loop. 
* 
* The scope of the varible is different. Sometimes you want to use the variable outside the loop.
* Then create a while loop. 
*/



#include <iostream>

int main() {
	std::cout << "This is what I found after looking for differences" << std::endl;
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

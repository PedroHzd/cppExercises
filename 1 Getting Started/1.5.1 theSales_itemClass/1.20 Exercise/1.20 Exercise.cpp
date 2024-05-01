// 1.20 Exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
* https://www.informit.com/title/0321714113 contains a copy of Sales_item.h in the Chapter 1 code directory.
* Copy that file to your working directory. 
* Use it to write a program that reads a set of book sales transactions,
* writing each transaction to the standard input.
* 
* I included the Sale_item.h file in the same repository.
* At first, the program would not compile.
* After opening the Sale_item.h file, it has an #include "Version.test.h".
* I just included that file and the program now compiles.
* I'm not sure why Sale.item.h needs Version.test.h but it works now.
* I opened both files and its literally black magic in there.
*/

#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item transactionOfOneBook;

	std::cout << "Please enter the ISBN, number of books sold, and sale price a single book\n"
		<< std::endl;

	while (std::cin >> transactionOfOneBook) {
		std::cout << transactionOfOneBook << std::endl;
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

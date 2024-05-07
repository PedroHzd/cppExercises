// 1.23 Exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
* I will combine exercise 1.23 and 1.24 in this program.
* 1.23 - Write a program that reads several transactions and counts how many transaction occur for each ISBN.
* 1.24 - Test the previous program by giving multiple transactions representing multiple ISBNs.
*        The records for each ISBN should be grouped together. 
* 
* 
*/

#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item firstBook, secondBook;
	int count = 0;

	std::cout << "Enter the ISBN, numbers of sales, and sales price" << std::endl;

	if (std::cin >> firstBook) {
		while (std::cin >> secondBook) {
			if (firstBook.isbn() == secondBook.isbn()) {
				++count;
				firstBook = secondBook;
			}
			else {
				std::coutn << "The book with ISBN of " << firstBook.isbn() << " has been entered "
					<< count << " times.\n" << std::endl;
				count = 0;
				firstBook = secondBook;
			}
		}

	}

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

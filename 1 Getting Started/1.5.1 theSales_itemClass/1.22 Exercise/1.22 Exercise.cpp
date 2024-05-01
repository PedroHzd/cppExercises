// 1.22 Exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
* Write a program that reads several transactions for the same ISBN.
* Write the sum of all the transactions that were read.
*/

#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item totalSumOfBooks, firstBook;

	std::cout << "Enter the ISBN, books sold, and the price of the book.\n"
		<< "Same sure the books have the same ISBN\n" << std::endl;

	std::cin >> totalSumOfBooks >> firstBook;
	if (totalSumOfBooks.isbn() == firstBook.isbn()) {
		totalSumOfBooks += firstBook;

		while (std::cin >> firstBook) {
			if (totalSumOfBooks.isbn() == firstBook.isbn()) {
				totalSumOfBooks += firstBook;
			}
			else {
				std::cout << "The ISBN are different\n" << "The current sum of the transactions is \n" 
					<< totalSumOfBooks << std::endl;
				return 0;
			}
		}
	}
	else {
		std::cout << "The ISBNs are different cannot calculate the sum" << std::endl;
		return 0;
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

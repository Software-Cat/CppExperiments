// UserInput.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

// Variable declaration
float num_1;
float num_2;
char oper;
float result;

int main()
{
	cout << "Enter the first number: ";
	cin >> num_1;

	cout << "Enter the second number: ";
	cin >> num_2;

	cout << "Enter the operator: ";
	cin >> oper;

	if (oper == '+') {
		result = num_1 + num_2;
		cout << "Sum is: " << result;
	}
	else if (oper == '-') {
		result = num_1 - num_2;
		cout << "Difference is: " << result;
	}
	else if (oper == '*') {
		result = num_1 * num_2;
		cout << "Product is: " << result;
	}
	else if (oper == '/') {
		result = num_1 / num_2;
		cout << "Quotient is: " << result;
	}
	else {
		cout << "Invalid operator, please try again.";
	}
}

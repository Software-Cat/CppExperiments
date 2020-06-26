// Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

// Constant assignment
const int myInt2 = 4;

// Variable declaration
int myNum;
double my_double = 0.1, sum;

int main()
{
	cout << "My num was: " << myNum << endl;
	myNum = 1;
	cout << "It is now: " << myNum << endl;

	cout << "My double was: " << my_double << endl;;
	my_double = 1.1;
	cout << "It is now: " << my_double << endl;

	sum = my_double + myNum;
	cout << "When you add my num and my double together...\n";
	cout << "You get " << sum;

	char myLetter = 'a';

	string myWord = "Hello!";

	bool myDecision = true;
}

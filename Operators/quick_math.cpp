// quick_math.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Variable declaration
int x = 2;
int y = 2;
int sum;
int difference;
int product;
int quotient;
int modulus;

int main()
{
	sum = x + y;
	cout << x << " plus " << y << " equals " << sum << endl;

	difference = sum - 1;
	cout << "minus 1 is " << difference << endl;

	product = difference * 6;
	cout << "that times 6 is " << product << endl;

	quotient = product / 2;
	cout << "divided by 2 is " << quotient << endl;

	modulus = quotient % 7;
	cout << "modulo 7 to get " << modulus << endl;

	// ++x returns x after it incremented, x++ returns x before it incremented
	cout << "plus one to become " << ++modulus << endl;
	cout << "minus one to get " << --modulus << endl;

	cout << "Time to see what cool bonuses this number has:\n";
	if (modulus == x) {
		cout << "Yay back at the start again\n";
	}
	if (modulus != 0) {
		cout << "Yay this number is not boring\n";
	}
	if (modulus > 5) {
		cout << "Your number is not holy anymore\n";
	}
	if (modulus < 3) {
		cout << "Too small for a high praise\n";
	}
	if (modulus >= 7) {
		cout << "You hacker this is not possible\n";
	}
	if (modulus <= -7) {
		cout << "You hacker this is not possible\n";
	}
}

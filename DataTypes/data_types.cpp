// basic_types.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Variable declaration
int my_int;
float my_float;
double my_double;
bool my_bool;
char my_char;
string my_string;

int main()
{
	my_int = 1;
	my_float = (float)1.1;
	my_double = 1.1e3;
	my_bool = false;
	my_char = 'a';
	my_string = "Hello";

	cout << my_double;
	cout << my_bool;
	cout << my_string;
}

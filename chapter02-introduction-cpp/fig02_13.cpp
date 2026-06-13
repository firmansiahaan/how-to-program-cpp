// Fig. 2.13: fig02_13.cpp
// Comparing integers using if statements, relational operators
// and equality operators.
#include <iostream>	// enables program to perform input and output

using std::cout;	// program uses cout
using std::cin;		// program uses cin
using std::endl;	// program uses endl

int main() {
	int number1{ 0 };
	int number2{ 0 };

	cout << "Enter two integers to compare: ";	// prompt user for data
	cin >> number1 >> number2;	// read two integers from user

	if (number1 == number2) {
		cout << number1 << " == " << number2 << endl;
	}

	if (number1 != number2) {
		cout << number1 << " != " << number2 << endl;
	}

	if (number1 < number2) {
		cout << number1 << " < " << number2 << endl;
	}

	if (number1 > number2) {
		cout << number1 << " > " << number2 << endl;
	}

	if (number1 <= number2) {
		cout << number1 << " <= " << number2 << endl;
	}

	if (number1 >= number2) {
		cout << number1 << " >= " << number2 << endl;
	}
}
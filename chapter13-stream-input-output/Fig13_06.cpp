// Fig. 13.6: Fig13_06.cpp
// Using stream manipulators hex, oct, dec and setbase.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int number;

	cout << "Enter a decimal number: ";
	cin >> number; // input number

	// use hex stream manipulator to show hexadecimal number
	cout << number << " in hexadecimal is: " << hex << number << "\n";

	// use oct stream manipulator to show octal number
	cout << dec << number << " in octal is: " << oct << number << "\n";

	// use setbase stream manipulator to show decimal number
	cout << setbase(10) << number << " in decimal is: " << number << endl;
}
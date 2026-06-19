// Fig. 13.19: Fig13_19.cpp
// flags member function.
#include <iostream>
using namespace std;

int main() {
	int integerValue{ 1000 };
	double doubleValue{ 0.0947628 };

	// display flags value, int and double values (original format)
	cout << "The value of the flags variable is: " << cout.flags()
		<< "\nPrint int and double in original format:\n"
		<< integerValue << '\t' << doubleValue;

	// use cout flags function to save original format
	ios_base::fmtflags originalFormat{ cout.flags() };
	cout << showbase << oct << scientific; // change format

	// display flags value, int and double values (new format)
	cout << "\n\nThe value of the flags variable is: " << cout.flags()
		<< "\nPrint int and double in a new format:\n"
		<< integerValue << '\t' << doubleValue;

	cout.flags(originalFormat); // restore format

	// display flags value, int and double values (original format)
	cout << "\n\nThe restored value of the flags variable is: "
		<< cout.flags() << "\nPrint values in original format again:\n"
		<< integerValue << '\t' << doubleValue << endl;
}
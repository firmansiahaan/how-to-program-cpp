// Fig. 13.20: Fig13_20.cpp
// Testing error states.
#include <iostream>
using namespace std;

int main() {
	int integerValue;

	// display results of cin functions
	cout << "Before a bad input operation:"
		<< "\ncin.rdstate(): " << cin.rdstate()
		<< "\n cin.eof(): " << cin.eof()
		<< "\n cin.fail(): " << cin.fail()
		<< "\n cin.bad(): " << cin.bad()
		<< "\n cin.good(): " << cin.good()
		<< "\n\nExpects an integer, but enter a character: ";

	cin >> integerValue; // enter character value

	// display results of cin functions after bad input
	cout << "Before a bad input operation:"
		<< "\ncin.rdstate(): " << cin.rdstate()
		<< "\n cin.eof(): " << cin.eof()
		<< "\n cin.fail(): " << cin.fail()
		<< "\n cin.bad(): " << cin.bad()
		<< "\n cin.good(): " << cin.good();

	cin.clear(); // clear stream

	// display results of cin functions after clearing cin
	cout << "\n\nAfter cin.clear()" << "\ncin.fail(): " << cin.fail()
		<< "\ncin.good(): " << cin.good() << endl;
}
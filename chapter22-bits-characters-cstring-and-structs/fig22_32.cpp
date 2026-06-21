// Fig. 22.32: fig22_32.cpp
// Using strtol.
#include <iostream>
#include <cstdlib> // strtol prototype
using namespace std;

int main() {
	const char* string1{ "-1234567abc" };
	char* remainderPtr{ nullptr };

	long x{ strtol(string1, &remainderPtr, 0) }; // convert to long

	cout << "The original string is \"" << string1
		<< "\"\nThe converted value is " << x
		<< "\nThe remainder of the original string is \"" << remainderPtr
		<< "\"\nThe converted value plus 567 is " << x + 567 << endl;
}
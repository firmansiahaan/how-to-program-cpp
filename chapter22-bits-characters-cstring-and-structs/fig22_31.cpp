// Fig. 22.31: fig22_31.cpp
// Using strtod.
#include <iostream>
#include <cstdlib> // strtod prototype
using namespace std;

int main() {
	const char* string1{ "51.2% are admitted" };
	char* stringPtr{ nullptr };

	double d{ strtod(string1, &stringPtr) }; // convert to double

	cout << "The string \"" << string1
		<< "\" is converted to the\ndouble value " << d
		<< " and the string \"" << stringPtr << "\"" << endl;
}
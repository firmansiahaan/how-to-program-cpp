// Fig. 22.36: fig22_36.cpp
// Using strcspn.
#include <iostream>
#include <cstring> // strcspn prototype
using namespace std;

int main() {
	const char* string1{ "The value is 3.14159" };
	const char* string2{ "1234567890" };

	cout << "string1 = " << string1 << "\nstring2 = " << string2
		<< "\n\nThe length of the initial segment of string1"
		<< "\ncontaining no characters from string2 = "
		<< strcspn(string1, string2) << endl;
}
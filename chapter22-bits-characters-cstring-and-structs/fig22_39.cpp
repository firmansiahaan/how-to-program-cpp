// Fig. 22.39: fig22_39.cpp
// Using strspn.
#include <iostream>
#include <cstring> // strspn prototype
using namespace std;

int main() {
	const char* string1{ "The value is 3.14159" };
	const char* string2{ "aehils Tuv" };
	
	cout << "string1 = " << string1 << "\nstring2 = " << string2
		<< "\n\nThe length of the initial segment of string1\n"
		<< "containing only characters from string2 = "
		<< strspn(string1, string2) << endl;
}
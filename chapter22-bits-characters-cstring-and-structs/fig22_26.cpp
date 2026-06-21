// Fig. 22.26: fig22_26.cpp
// Using strlen.
#include <iostream>
#include <cstring> // prototype for strlen
using namespace std;

int main() {
	const char* string1{ "abcdefghijklmnopqrstuvwxyz" };
	const char* string2{ "four" };
	const char* string3{ "Boston" };

	cout << "The length of \"" << string1 << "\" is " << strlen(string1)
		<< "\nThe length of \"" << string2 << "\" is " << strlen(string2)
		<< "\nThe length of \"" << string3 << "\" is " << strlen(string3)
		<< endl;
}
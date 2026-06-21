// Fig. 22.37: fig22_37.cpp
// Using strpbrk.
#include <iostream>
#include <cstring> // strpbrk prototype
using namespace std;

int main() {
	const char* string1{ "This is a test" };
	const char* string2{ "beware" };

	cout << "Of the characters in \"" << string2 << "\"\n'"
		<< *strpbrk(string1, string2) << "\' is the first character "
		<< "to appear in\n\"" << string1 << '\"' << endl;
}
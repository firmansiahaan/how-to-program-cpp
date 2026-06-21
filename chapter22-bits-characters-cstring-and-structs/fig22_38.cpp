// Fig. 22.38: fig22_38.cpp
// Using strrchr.
#include <iostream>
#include <cstring> // strrchr prototype
using namespace std;

int main() {
	const char* string1{ "A zoo has many animals including zebras" };
	char c{ 'z' };

	cout << "string1 = " << string1 << "\n" << endl;
	cout << "The remainder of string1 beginning with the\n"
		<< "last occurrence of character '"
		<< c << "' is: \"" << strrchr(string1, c) << '\"' << endl;
}
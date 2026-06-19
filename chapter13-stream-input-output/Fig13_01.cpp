// Fig. 13.1: Fig13_01.cpp
// Printing the address stored in a char* variable.
#include <iostream>
using namespace std;

int main() {
	const char* const word{ "again" };

	// display the value of char* variable word, then display
	// the value of word after a static_cast to void*
	cout << "Value of word is: " << word
		<< "\nValue of static_cast<const void*>(word) is: "
		<< static_cast<const void*>(word) << endl;
}
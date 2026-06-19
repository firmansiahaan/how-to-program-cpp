// Fig. 13.18: Fig13_18.cpp
// Stream manipulators boolalpha and noboolalpha.
#include <iostream>
using namespace std;

int main() {
	bool booleanValue{ true };

	// display default true booleanValue
	cout << "booleanValue is " << booleanValue;

	// display booleanValue after using boolalpha
	cout << "\nbooleanValue (after using boolalpha) is "
		<< boolalpha << booleanValue;

	cout << "\n\nswitch booleanValue and use noboolalpha\n";
	booleanValue = false; // change booleanValue
	cout << noboolalpha; // use noboolalpha

	// display default false booleanValue after using noboolalpha
	cout << "\nbooleanValue is " << booleanValue;

	// display booleanValue after using boolalpha again
	cout << "\nbooleanValue (after using boolalpha) is "
		<< boolalpha << booleanValue << endl;
}
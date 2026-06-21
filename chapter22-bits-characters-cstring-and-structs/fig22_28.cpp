// Fig. 22.28: fig22_28.cpp
// Using atof.
#include <iostream>
#include <cstdlib> // atof prototype
using namespace std;

int main() {
	double d{ atof("99.0") }; // convert string to double

	cout << "The string \"99.0\" converted to double is " << d
		<< "\nThe converted value divided by 2 is " << d / 2.0 << endl;
}
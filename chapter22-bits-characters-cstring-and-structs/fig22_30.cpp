// Fig. 22.30: fig22_30.cpp
// Using atol.
#include <iostream>
#include <cstdlib> // atol prototype
using namespace std;

int main() {
	long x{ atol("1000000") }; // convert string to long

	cout << "The string \"1000000\" converted to long is " << x
		<< "\nThe converted value divided by 2 is " << x / 2 << endl;
}
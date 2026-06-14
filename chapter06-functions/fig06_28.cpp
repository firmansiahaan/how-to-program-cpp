// Fig. 6.28: fig06_28.cpp
// Iterative function factorial.
#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial(unsigned int); // function prototype

int main() {
	// calculate the factorials of 0 through 10
	for (unsigned int counter{ 0 }; counter <= 10; ++counter) {
		cout << setw(2) << counter << "! = " << factorial(counter)
			<< endl;
	}
}

// iterative function factorial
unsigned long factorial(unsigned int number) {
	unsigned long result{ 1 };
	
	// iterative factorial calculation
	for (unsigned int i{ number }; i >= 1; --i) {
		result *= i;
	}

	return result;
}
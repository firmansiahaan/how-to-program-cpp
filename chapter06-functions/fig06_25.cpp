// Fig. 6.25: fig06_25.cpp
// Recursive function factorial.
#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial(unsigned long); // function prototype

int main() {
	// calculate the factorials of 0 through 10
	for (unsigned int counter{ 0 }; counter <= 10; ++counter) {
		cout << setw(2) << counter << "! = " << factorial(counter)
			<< endl;
	}
}

// recursive definition of function factorial
unsigned long factorial(unsigned long number) {
	if (number <= 1) { // test for base case
		return 1; // base cases: 0! = 1 and 1! = 1
	}
	else {	// recursion step
		return number * factorial(number - 1);
	}
}
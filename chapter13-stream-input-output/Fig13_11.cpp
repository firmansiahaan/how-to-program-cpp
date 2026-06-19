// Fig. 13.11: Fig13_11.cpp
// Controlling the printing of trailing zeros and
// decimal points in floating-point values.
#include <iostream>
using namespace std;

int main() {
	// display double values with default stream format
	cout << "Before using showpoint"
		<< "\n9.9900 prints as: " << 9.9900
		<< "\n9.9000 prints as: " << 9.9000
		<< "\n9.0000 prints as: " << 9.0000;

	// display double value after showpoint
	cout << showpoint
		<< "\n\nAfter using showpoint"
		<< "\n9.9900 prints as: " << 9.9900
		<< "\n9.9000 prints as: " << 9.9000
		<< "\n9.0000 prints as: " << 9.0000 << endl;
}
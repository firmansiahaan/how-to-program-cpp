// Fig. 13.16: Fig13_16.cpp
// Floating-point values displayed in system default,
// scientific and fixed formats.
#include <iostream>
using namespace std;

int main() {
	double x{ 0.001234567 };
	double y{ 1.946e9 };

	// display x and y in default format
	cout << "Displayed in default format:\n" << x << '\t' << y;

	// display x and y in scientific format
	cout << "\n\nDisplayed in scientific format:\n"
		<< scientific  << x << '\t' << y;

	// display x and y in fixed format
	cout << "\n\nDisplayed in fixed format:\n"
		<< fixed << x << '\t' << y << endl;
}
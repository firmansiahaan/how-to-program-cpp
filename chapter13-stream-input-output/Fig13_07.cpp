// Fig. 13.7: Fig13_07.cpp
// Controlling precision of floating-point values.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	double root2{ sqrt(2.0) }; // calculate square root of 2

	cout << "Square root of 2 with precisions 0-9.\n"
		<< "Precision set by ostream member function precision:\n";
	cout << fixed; // use fixed-point notation

	// display square root using ostream function precision
	for (int places{ 0 }; places <= 9; ++places) {
		cout.precision(places);
		cout << root2 << "\n";
	}

	cout << "\nPrecision set by stream manipulator setprecision:\n";

	// set precision for each digit, then display square root
	for (int places{ 0 }; places <= 9; ++places) {
		cout << setprecision(places) << root2 << "\n";
	}
}
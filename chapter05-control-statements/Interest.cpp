// Fig. 5.6: Interest.cpp
// Compound-interest calculations with for.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	// set floating-point number format
	cout << setprecision(2) << fixed;

	double totalLoan{ 0.0 };
	double principle{ 400000000.0 };
	double rate{ 0.06 };

	cout << "Initial Principal: " << principle << endl;
	cout << "    Interest Rate: " << rate << endl;

	// display headers
	cout << "\nYear" << setw(20) << "Amount on Deposit" << endl;

	// calculate amount on deposit for each of ten years
	for (unsigned int year{ 1 }; year <= 10; year++) {
		// calculate amount on deposit at the end of the specified year
		double amount = principle * pow(1.0 + rate, year);

		// display the year and the amount
		cout << setw(4) << year << setw(20) << amount << endl;

		totalLoan = amount;
	}

	cout << "\nAmortization per month: " << totalLoan / 10 / 12 << endl;
}
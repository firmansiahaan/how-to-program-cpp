// Fig. 7.7: fig07_07.cpp
// Bar chart printing program.
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main() {
	const size_t arraySize{ 11 };
	array<int, arraySize> n{ 0, 7, 0, 10, 0, 0, 1, 2, 4, 2, 1 };

	cout << "Grade distribution:" << endl;

	// for each element of array n, output a bar of the chart
	for (size_t i{ 0 }; i < n.size(); ++i) {
		// output bar labels ("0-9:", ..., "90-99:", "100:")
		if (i == 0) {
			cout << " 0-9 :";
		}
		else if (i == 10) {
			cout << "  100:";
		}
		else {
			cout << (i * 10) << '-' << (i * 10 + 9) << ':';
		}

		// print bar of asterisks
		for (unsigned int stars{ 0 }; stars < n[i]; ++stars) {
			cout << "*";
		}

		cout << endl; // start a new line of output
	}
}
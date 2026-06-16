// Fig. 7.4: fig07_04.cpp
// Initializing an array in a declaration.
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main() {
	array<int, 5> n{32, 27, 64, 18, 95};	// n is an array of 5 int values

	cout << "Element" << setw(10) << "Value" << endl;

	// output each array element's value
	for (size_t j{ 0 }; j < n.size(); ++j) {
		cout << setw(7) << j << setw(10) << n[j] << endl;
	}
}
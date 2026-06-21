// Fig. 21.4: Fig21_04.cpp
// Using the swap function to swap two strings.
#include <iostream>
#include <string>
using namespace std;

int main() {
	string first{ "one" };
	string second{ "two" };

	// output strings
	cout << "Before swap:\n first: " << first << "\nsecond: " << second;

	first.swap(second); // swap strings

	cout << "\n\nAfter swap:\n first: " << first
		<< "\nsecond: " << second << endl;
}
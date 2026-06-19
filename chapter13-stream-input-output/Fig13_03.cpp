// Fig. 13.3: Fig13_03.cpp
// Contrasting input of a string via cin and cin.get.
#include <iostream>
using namespace std;

int main() {
	// create two char arrays, each with 80 elements
	const int SIZE{ 80 };
	char buffer1[SIZE];
	char buffer2[SIZE];

	// use cin to input characters into buffer1
	cout << "Enter a sentence:\n";
	cin >> buffer1;

	// display buffer1 contents
	cout << "\nThe string read with cin was:\n" << buffer1 << "\n\n";

	// use cin.get to input characters into buffer2
	cin.get(buffer2, SIZE);

	// display buffer2 contents
	cout << "The string read with cin.get was:\n" << buffer2 << endl;
}
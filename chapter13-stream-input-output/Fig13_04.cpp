// Fig. 13.4: Fig13_04.cpp
// Inputting characters using cin member function getline.
#include <iostream>
using namespace std;

int main() {
	const int SIZE{ 80 };
	char buffer[SIZE];

	// input characters in buffer via cin function getline
	cout << "Enter a sentence:\n";
	cin.getline(buffer, SIZE);

	// display buffer contents
	cout << "\nThe sentence entered is:\n" << buffer << endl;
}
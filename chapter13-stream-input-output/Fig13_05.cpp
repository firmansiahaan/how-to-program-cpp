// Fig. 13.5: Fig13_05.cpp
// Unformatted I/O using read, gcount and write.
#include <iostream>
using namespace std;

int main() {
	const int SIZE{ 80 };
	char buffer[SIZE];

	// use function read to input characters into buffer
	cout << "Enter a sentence:\n";
	cin.read(buffer, 20);

	// use functions write and gcount to display buffer characters
	cout << "\nThe sentence entered was:\n";
	cout.write(buffer, cin.gcount());
	cout << endl;
}
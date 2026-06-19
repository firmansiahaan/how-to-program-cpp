// Fig. 13.8: Fig13_08.cpp
// width member function of classes istream and ostream.
#include <iostream>
using namespace std;

int main() {
	int widthValue{ 4 };
	char sentence[10];

	cout << "Enter a sentence:\n";
	cin.width(5); // input only 5 characters from sentence

	// set field width, then display characters based on that width
	while (cin >> sentence) {
		cout.width(widthValue++);
		cout << sentence << "\n";
		cin.width(5); // input 5 more characters from sentence
	}
}
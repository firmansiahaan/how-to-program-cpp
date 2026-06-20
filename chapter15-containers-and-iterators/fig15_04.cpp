// Fig. 15.4: fig15_04.cpp
// Demonstrating input and output with iterators.
#include <iostream>
#include <iterator> // ostream_iterator and istream_iterator
using namespace std;

int main() {
	cout << "Enter two integers: ";

	// create istream_iterator for reading int values from cin
	istream_iterator<int> inputInt{ cin };

	int number1{ *inputInt };
	++inputInt;
	int number2{ *inputInt };

	// create ostream_iterator for writing int values to cout
	ostream_iterator<int> outputInt{ cout };

	cout << "The sum is: ";
	*outputInt = number1 + number2;
	cout << endl;
}
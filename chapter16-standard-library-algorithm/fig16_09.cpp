// Fig. 16.9: fig16_09.cpp
// Algorithms copy_backward, merge, unique and reverse.
#include <iostream>
#include <algorithm> // algorithm definitions
#include <array> // array class-template definition
#include <iterator> // ostream_iterator
using namespace std;

int main() {
	const size_t SIZE{ 5 };
	array<int, SIZE> a1{ 1, 3, 5, 7, 9 };
	array<int, SIZE> a2{ 2, 4, 5, 7, 9 };
	ostream_iterator<int> output{ cout, " " };
	
	cout << "array a1 contains: ";
	copy(a1.cbegin(), a1.cend(), output); // display a1
	cout << "\narray a2 contains: ";
	copy(a2.cbegin(), a2.cend(), output); // display a2

	array<int, SIZE> results;

	// place elements of a1 into results in reverse order
	copy_backward(a1.cbegin(), a1.cend(), results.end());
		cout << "\n\nAfter copy_backward, results contains: ";
	copy(results.cbegin(), results.cend(), output);

	array<int, SIZE + SIZE> results2;

	// merge elements of a1 and a2 into results2 in sorted order
	merge(a1.cbegin(), a1.cend(), a2.cbegin(), a2.cend(),
		results2.begin());
		
	cout << "\n\nAfter merge of a1 and a2 results2 contains: ";
	copy(results2.cbegin(), results2.cend(), output);

	// eliminate duplicate values from results2
	auto endLocation = unique(results2.begin(), results2.end());

	cout << "\n\nAfter unique results2 contains: ";
	copy(results2.begin(), endLocation, output);

	cout << "\n\narray a1 after reverse: ";
	reverse(a1.begin(), a1.end());	// reverse elements of a1
	copy(a1.cbegin(), a1.cend(), output);
	cout << endl;

}
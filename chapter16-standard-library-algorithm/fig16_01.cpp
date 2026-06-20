// Fig. 16.1: fig16_01.cpp
// Lambda expressions.
#include <iostream>
#include <array>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
	const size_t SIZE{ 4 }; // size of array values
	array<int, SIZE> values{ 1, 2, 3, 4 }; // initialize values
	ostream_iterator<int> output{ cout, " " };

	cout << "values contains: ";
	copy(values.cbegin(), values.cend(), output);
	cout << "\nDisplay each element multiplied by two: ";

	// output each element multiplied by two
	for_each(values.cbegin(), values.cend(),
		[](auto i) {cout << i * 2 << " "; });

	// add each element to sum
	int sum = 0; // initialize sum to zero
	for_each(values.cbegin(), values.cend(), [&sum](auto i) {sum += i; });

	cout << "\nSum of value's elements is: " << sum << endl; // output sum
}
// Fig. 16.15: fig16_15.cpp
// Demonstrating function objects.
#include <iostream>
#include <array> // array class-template definition
#include <algorithm> // copy algorithm
#include <numeric> // accumulate algorithm
#include <functional> // binary_function definition
#include <iterator> // ostream_iterator
using namespace std;

// binary function adds square of its second argument and the
// running total in its first argument, then returns the sum
int sumSquares(int total, int value) {
	return total + value * value;
}

// Class template SumSquaresClass defines overloaded operator()
// that adds the square of its second argument and running
// total in its first argument, then returns sum
template<typename T>
class SumSquaresClass {
public:
	// add square of value to total and return result
	T operator()(const T& total, const T& value) {
		return total + value * value;
	}
};

int main() {
	const size_t SIZE{ 10 };
	array<int, SIZE> integers{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	ostream_iterator<int> output{ cout, " " };

	cout << "array integers contains: ";
	copy(integers.cbegin(), integers.cend(), output);

	// calculate sum of squares of elements of array integers
	// using binary function sumSquares
	int result{ accumulate(integers.cbegin(), integers.cend(),
		0, sumSquares) };

	cout << "\n\nSum of squares of integers' elements using "
		<< "binary function sumSquares: " << result;

	// calculate sum of squares of elements of array integers
	// using binary function object
	result = accumulate(integers.cbegin(), integers.cend(),
		0, SumSquaresClass<int>{});

	cout << "\n\nSum of squares of integers' elements using binary"
		<< "\nfunction object of type SumSquaresClass<int>: "
		<< result;

	// calculate sum of squares array's elements using a lambda
	result = accumulate(integers.cbegin(), integers.cend(),
		0, [](auto total, auto value) {return total + value * value; });

	cout << "\n\nSum of squares of integer's elements using a lambda: "
		<< result << endl;
}
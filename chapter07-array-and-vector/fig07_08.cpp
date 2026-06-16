// Fig. 7.8: fig07_08.cpp
// Die-rolling program using an array instead of switch.
#include <iostream>
#include <iomanip>
#include <array>
#include <random>
#include <ctime>
using namespace std;

int main() {
	// use the default random-number generation engine to
	// produce uniformly distributed pseudorandom int values from 1 to 6
	default_random_engine engine(static_cast<double>(time(0)));
	uniform_int_distribution<unsigned int>random(1, 6);

	const size_t arraySize{ 7 }; // ignore element zero
	array<unsigned int, arraySize> frequency{};		// initialize to 0s

	// roll die 60,000,000 times; use die value as frequency index
	for (unsigned int roll{ 1 }; roll < 60000000; ++roll) {
		++frequency[random(engine)];
	}

	cout << "Face" << setw(13) << "Frequency" << endl;

	for (size_t face{ 1 }; face < frequency.size(); ++face) {
		cout << setw(3) << face << setw(13) << frequency[face] << endl;
	}

	cout << endl;
}
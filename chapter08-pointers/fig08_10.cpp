// Fig. 8.10: fig08_10.cpp
// Attempting to modify data through a
// nonconstant pointer to constant data.
#include <iostream>

void f(const int*); // prototype

int main() {
	int y{ 0 };

	f(&y); // f will attempt an illegal modification
}

void f(const int* xPtr) {
	// *xPtr = 100; // error: cannot modify a const object
	xPtr = nullptr;
}
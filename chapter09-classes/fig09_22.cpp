// Fig. 9.22: fig09_22.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include "Date1.h" // Date class definition
#include "Employee.h" // Employee class definition
using namespace std;

int main() {
	Date1 birth{ 7, 24, 1949 };
	Date1 hire{ 3, 12, 1988 };
	Employee manager{ "Bob", "Blue", birth, hire };

	cout << "\n" << manager.toString() << endl;
}
// Fig. 9.30: fig09_30.cpp
// static data member tracking the number of objects of a class.
#include <iostream>
#include "Employee2.h" // Employee class definition
using namespace std;

int main() {
	// no objects exist; use class name and binary scope resolution
	// operator to access static member function getCount
	cout << "Number of employees before instantiation of any objects is "
		<< Employee2::getCount() << endl; // use class name

	// the following scope creates and destroys
	// Employee objects before main terminates
	{
		Employee2 e1{ "Susan", "Baker" };
		Employee2 e2{ "Robert", "Jones" };

		// two objects exist; call static member function getCount again
		// using the class name and the scope resolution operator
		cout << "Number of employees after objects are instantiated is "
			<< Employee2::getCount();

		cout << "\n\nEmployee 1: "
			<< e1.getFirstName() << " " << e1.getLastName()
			<< "\nEmployee 2: "
			<< e2.getFirstName() << " " << e2.getLastName() << "\n\n";
	}

	// no objects exist, so call static member function getCount again
	// using the class name and the scope resolution operator
	cout << "\nNumber of employees after objects are deleted is "
		<< Employee2::getCount() << endl;
}
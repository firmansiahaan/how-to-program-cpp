// Fig. 9.29: Employee2.cpp
// Employee class member-function definitions.
#include <iostream>
#include "Employee2.h"
using namespace std;

// define and initialize static data member at global namespace scope
unsigned int Employee2::count{ 0 }; // cannot include keyword static

// define static member function that returns number of
// Employee objects instantiated (declared static in Employee.h)
unsigned int Employee2::getCount() { return count; }

// constructor initializes non-static data members and
// increments static data member count
Employee2::Employee2(const string& first, const string& last)
	: firstName(first), lastName(last) {
	++count; // increment static count of employees
	cout << "Employee constructor for " << firstName
		<< ' ' << lastName << " called." << endl;
}

// destructor decrements the count
Employee2::~Employee2() {
	cout << "~Employee() called for " << firstName
		<< ' ' << lastName << endl;
	--count; // decrement static count of employees
}

// return first name of employee
string Employee2::getFirstName() const { return firstName; }

// return last name of employee
string Employee2::getLastName() const { return lastName; }

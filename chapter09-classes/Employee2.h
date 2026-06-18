// Fig. 9.28: Employee2.h
// Employee class definition with a static data member to
// track the number of Employee objects in memory
#ifndef EMPLOYEE2_H
#define EMPLOYEE2_H

#include <string>

class Employee2 {
public:
	Employee2(const std::string&, const std::string&); // constructor
	~Employee2(); // destructor
	std::string getFirstName() const; // return first name
	std::string getLastName() const; // return last name

	// static member function
	static unsigned int getCount(); // return # of objects instantiated
private:
	std::string firstName;
	std::string lastName;

	// static data
	static unsigned int count; // number of objects instantiated
};

#endif
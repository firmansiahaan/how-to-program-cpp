// Fig. 9.19: Date1.cpp
// Date class member-function definitions.
#include <array>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include "Date1.h"
using namespace std;

// constructor confirms proper value for month; calls
// utility function checkDay to confirm proper value for day
Date1::Date1(unsigned int mn, unsigned int dy, unsigned int yr)
	: month{ mn }, day{ dy }, year{ yr } {
	if (mn < 1 || mn > monthsPerYear) { // validate the month
		throw invalid_argument("month must be 1-12");
	}

	// output Date object to show when its constructor is called
	cout << "Date object constructor for date " << toString() << endl;
}

// print Date object in form month/day/year
string Date1::toString() const {
	ostringstream output;
	output << month << '/' << day << '/' << year;
	return output.str();
}

// output Date object to show when its destructor is called
Date1::~Date1() {
	cout << "Date object destructor for date " << toString() << endl;
}

// utility function to confirm proper day value based on
// month and year; handles leap years, too
unsigned int Date1::checkDay(int testDay) const {
	static const array<int, monthsPerYear + 1> daysPerMonth{
		0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	// determine whether testDay is valid for specified month
	if (testDay > 0 && testDay <= daysPerMonth[month]) {
		return testDay;
	}

	// February 29 check for leap year
	if (month == 2 && testDay == 29 && (year % 400 == 0 ||
		(year % 4 == 0 && year % 100 != 0))) {
		return testDay;
	}

	throw invalid_argument("Invalid day for current month and year");
}
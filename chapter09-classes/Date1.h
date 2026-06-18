// Fig. 9.18: Date1.h
// Date class definition; Member functions defined in Date.cpp
#include <string>

#ifndef DATE1_H
#define DATE1_H

class Date1 {
public:
	static const unsigned int monthsPerYear{ 12 }; // months in a year
	explicit Date1(unsigned int = 1, unsigned int = 1, unsigned int = 1900);
	std::string toString() const; // date string in month/day/year format
	~Date1(); // provided to confirm destruction order
private:
	unsigned int month; // 1-12 (January-December)
	unsigned int day; // 1-31 based on month
	unsigned int year; // any year

	// utility function to check if day is proper for month and year
	unsigned int checkDay(int) const;
};		

#endif // !DATE1_H
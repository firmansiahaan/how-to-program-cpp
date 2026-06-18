// Fig. 9.25: Time3.h
// Time class modified to enable cascaded member-function calls.
#include <string>

// Time class definition.
// Member functions defined in Time.cpp.
#ifndef TIME3_H
#define TIME3_H

class Time3 {
public:
	explicit Time3(int = 0, int = 0, int = 0); // default constructor

	// set functions (the Time& return types enable cascading)
	Time3& setTime(int, int, int); // set hour, minute, second
	Time3& setHour(int); // set hour
	Time3& setMinute(int); // set minute
	Time3& setSecond(int); // set second

	unsigned int getHour() const; // return hour
	unsigned int getMinute() const; // return minute
	unsigned int getSecond() const; // return second
	std::string toUniversalString() const; // 24-hour time format string
	std::string toStandardString() const; // 12-hour time format string
private:
	unsigned int hour{ 0 }; // 0 - 23 (24-hour clock format)
	unsigned int minute{ 0 }; // 0 - 59
	unsigned int second{ 0 }; // 0 - 59
};

#endif
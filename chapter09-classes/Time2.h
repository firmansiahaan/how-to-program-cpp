// Fig. 9.11: Time2.h
// Time class declaration.
// Member functions defined in Time.cpp

// prevent multiple inclusions of header
#ifndef TIME2_H
#define TIME2_H

class Time2 {
public:
	void setTime(int, int, int);
	unsigned int getHour() const;
	unsigned int& badSetHour(int); // dangerous reference return
private:
	unsigned int hour{ 0 };
	unsigned int minute{ 0 };
	unsigned int second{ 0 };
};

#endif
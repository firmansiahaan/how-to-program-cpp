// Fig. 9.17: fig09_17.cpp
// const objects and const member functions.
#include "Time.h" // include Time class definition

int main() {
	Time wakeUp{ 6, 45, 0 };
	const Time noon{ 12, 0, 0 }; // constant object


	wakeUp.setHour(18);
	// noon.setHour(12);	// Error: const
	wakeUp.getHour();
	noon.getMinute();
	noon.toUniversalString();
	noon.toStandardString();
}
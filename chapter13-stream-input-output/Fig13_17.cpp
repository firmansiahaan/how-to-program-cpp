// Fig. 13.17: Fig13_17.cpp
// Stream manipulator uppercase.
#include <iostream>
using namespace std;

int main() {
	cout << "Printing uppercase letters in scientific\n"
		<< "notation exponents and hexadecimal values:\n";
	
		// use std::uppercase to display uppercase letters; use std::hex and
		// std::showbase to display hexadecimal value and its base
		cout << uppercase << 4.345e10 << "\n"
		<< hex << showbase << 123456789 << endl;
}
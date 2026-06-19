// Fig. 13.15: Fig13_15.cpp
// Stream manipulator showbase.
#include <iostream>
using namespace std;

int main() {
	int x{ 100 };
	
	// use showbase to show number base
	cout << "Printing octal and hexadecimal values with showbase:\n"
		<< showbase;
	
	cout << x << endl; // print decimal value
	cout << oct << x << endl; // print octal value
	cout << hex << x << endl; // print hexadecimal value
}
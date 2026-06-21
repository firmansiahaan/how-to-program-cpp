// Fig. 22.45: fig22_45.cpp
// Using memchr.
#include <iostream>
#include <cstring> // memchr prototype
using namespace std;

int main() {
	char s[]{ "This is a string" };
	
	cout << "s = " << s << "\n" << endl;
	cout << "The remainder of s after character 'r' is found is \""
		<< static_cast<char*>(memchr(s, 'r', 16)) << '\"' << endl;
}
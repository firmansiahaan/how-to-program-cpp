// Fig. 22.46: fig22_46.cpp
// Using memset.
#include <iostream>
#include <cstring> // memset prototype
using namespace std;

int main() {
	char string1[15]{ "BBBBBBBBBBBBBB" };
	
	cout << "string1 = " << string1 << endl;
	cout << "string1 after memset = "
		<< static_cast<char*>(memset(string1, 'b', 7)) << endl;
	
}
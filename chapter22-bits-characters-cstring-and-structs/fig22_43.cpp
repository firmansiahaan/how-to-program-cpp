// Fig. 22.43: fig22_43.cpp
// Using memmove.
#include <iostream>
#include <cstring> // memmove prototype
using namespace std;

int main() {
	char x[]{ "Home Sweet Home" };

	cout << "The string in array x before memmove is: " << x;
	cout << "\nThe string in array x after memmove is: "
		<< static_cast<char*>(memmove(x, &x[5], 10)) << endl;
}
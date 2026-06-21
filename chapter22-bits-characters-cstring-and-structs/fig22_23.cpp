// Fig. 22.23: fig23_23.cpp
// Using strcat and strncat.
#include <iostream>
#include <cstring> // prototypes for strcat and strncat
using namespace std;

int main() {
	char s1[20]{ "Happy " }; // length 6
	char s2[]{ "New Year " }; // length 9
	char s3[40]{ "" };

	cout << "s1 = " << s1 << "\ns2 = " << s2;

	strcat(s1, s2); // concatenate s2 to s1 (length 15)

	cout << "\n\nAfter strcat(s1, s2):\ns1 = " << s1 << "\ns2 = " << s2;

	// concatenate first 6 characters of s1 to s3
	strncat(s3, s1, 6); // places '\0' after last character

	cout << "\n\nAfter strncat(s3, s1, 6):\ns1 = " << s1
		<< "\ns3 = " << s3;

	strcat(s3, s1); // concatenate s1 to s3
	cout << "\n\nAfter strcat(s3, s1):\ns1 = " << s1
		<< "\ns3 = " << s3 << endl;
}
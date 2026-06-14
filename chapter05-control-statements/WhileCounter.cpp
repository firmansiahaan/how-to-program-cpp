// Fig. 5.1: WhileCounter.cpp
// Counter-controlled iteration with the while iteration statement.
#include <iostream>
using namespace std;

int main() {
	unsigned int counter{ 1 };	// declare and initialize control variable

	while (counter <= 10) {		// loop-continuation condition	
		cout << counter << " ";
		counter++;
	}

	cout << endl;
}
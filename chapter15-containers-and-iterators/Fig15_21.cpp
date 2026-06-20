// Fig. 15.21: fig15_21.cpp
// Standard Library priority_queue adapter class.
#include <iostream>
#include <queue> // priority_queue adapter definition
using namespace std;

int main() {
	priority_queue<double> priorities; // create priority_queue

	// push elements onto priorities
	priorities.push(3.2);
	priorities.push(9.8);
	priorities.push(5.4);

	cout << "Popping from priorities: ";

	// pop element from priority_queue
	while (!priorities.empty()) {
		cout << priorities.top() << ' '; // view top element
		priorities.pop(); // remove top element
	}

	cout << endl;
}
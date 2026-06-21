// Fig. 18.3: fig18_02.cpp
// Stack class template test program.
#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
	Stack<double> doubleStack;	// create a Stack of double
	const size_t doubleStackSize{ 5 }; // stack size
	double doubleValue{ 1.1 }; // first value to push

	cout << "Pushing elements onto doubleStack\n";

	// push 5 doubles onto doubleStack
	for (size_t i{ 0 }; i < doubleStackSize; ++i) {
		doubleStack.push(doubleValue);
		cout << doubleValue << ' ';
		doubleValue += 1.1;
	}

	cout << "\n\nPopping elements from doubleStack\n";

	// pop elements from doubleStack
	while (!doubleStack.isEmpty()) { // loop while Stack is not empty
		cout << doubleStack.top() << ' '; // display top element
		doubleStack.pop(); // remove top element
	}

	cout << "\nStack is empty, cannot pop.\n";

	Stack<int> intStack;	// create a Stack of int
	const size_t intStackSize{ 10 }; // stack size
	int intValue{ 1 }; // first value to push

	cout << "\nPushing elements onto intStack\n";

	// push 10 integers onto intStack
	for (size_t i{ 0 }; i < intStackSize; ++i) {
		intStack.push(intValue);
		cout << intValue++ << ' ';
	}

	cout << "\n\nPopping elements from intStack\n";

	// pop elements from intStack
	while (!intStack.isEmpty()) { // loop while Stack is not empty
		cout << intStack.top() << ' ';
		intStack.pop();
	}

	cout << "\nStack is empty, cannot pop." << endl;
}

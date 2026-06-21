// Fig. 22.25: fig22_25.cpp
// Using strtok to tokenize a string.
#include <iostream>
#include <cstring> // prototype for strtok
using namespace std;

int main() {
	char sentence[]{ "This is a sentence with 7 tokens" };

	cout << "The string to be tokenized is:\n" << sentence
		<< "\n\nThe tokens are:\n\n";

	// begin tokenization of sentence
	char* tokenPtr{ strtok(sentence, " ") };

	// continue tokenizing sentence until tokenPtr becomes NULL
	while (tokenPtr != NULL) {
		cout << tokenPtr << '\n';
		tokenPtr = strtok(NULL, " ");	// get next token
	}

	cout << "\nAfter strtok, sentence = " << sentence << endl;
}
// Fig. 3.1: AccountTest.cpp
// Creating and manipulating an Account object.

#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {
	Account account1{ "Jane Green", 50 };	// create Account object myAccount1
	Account account2( "John Blue", -7);	// create Account object myAccount2

	// display initial balance of each object
	cout << "Account1 name is: " << account1.getName() << " balance is $" 
		<< account1.getBalance() << endl;
	cout << "Account2 name is: " << account2.getName() << " balance is $" 
		<< account2.getBalance() << endl << endl;

	cout << "Enter deposit amount for account1: ";	// prompt
	int depositAmount{ 0 };
	cin >> depositAmount;	// obtain user input
	cout << "adding " << depositAmount << " to account1 balance";
	account1.deposit(depositAmount);

	// display balances
	cout << "\n\naccount1: " << account1.getName() << " balance is $"
		<< account1.getBalance();
	cout << "\naccount2: " << account2.getName() << " balance is $"
		<< account2.getBalance();

	cout << "\n\nEnter deposit amount for account2: "; // prompt
	cin >> depositAmount; // obtain user input
	cout << "adding " << depositAmount << " to account2 balance";
	account2.deposit(depositAmount); // add to account2 balance

	// display balances
	cout << "\n\naccount1: " << account1.getName() << " balance is $"
		<< account1.getBalance();
	cout << "\naccount2: " << account2.getName() << " balance is $"
		<< account2.getBalance() << endl;
	
}
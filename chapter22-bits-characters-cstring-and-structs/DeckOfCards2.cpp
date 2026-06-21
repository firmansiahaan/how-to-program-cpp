// Fig. 22.15: DeckOfCards.cpp
// Member-function definitions for class DeckOfCards that simulates
// the shuffling and dealing of a deck of playing cards.
#include <iostream>
#include <iomanip>
#include "DeckOfCards2.h"
using namespace std;

// no-argument DeckOfCards constructor intializes deck
DeckOfCards2::DeckOfCards2() {
	for (size_t i{ 0 }; i < deck.size(); ++i) {
		deck[i].face = i % faces; // faces in order
		deck[i].suit = i / faces; // suits in order
		deck[i].color = i / (faces * colors); // colors in order
	}
}

// deal cards in deck
void DeckOfCards2::deal() const {
	for (size_t k1{ 0 }, k2{ k1 + deck.size() / 2 };
		k1 < deck.size() / 2 - 1; ++k1, ++k2) {
		cout << "Card:" << setw(3) << deck[k1].face
			<< " Suit:" << setw(2) << deck[k1].suit
			<< " Color:" << setw(2) << deck[k1].color
			<< " " << "Card:" << setw(3) << deck[k2].face
			<< " Suit:" << setw(2) << deck[k2].suit
			<< " Color:" << setw(2) << deck[k2].color << endl;
	}
}

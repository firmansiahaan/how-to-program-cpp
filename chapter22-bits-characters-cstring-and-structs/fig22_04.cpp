// Fig. 22.4: fig22_04.cpp
// Card shuffling and dealing program.
#include "DeckOfCards.h" // DeckOfCards class definition

int main() {
	DeckOfCards deckOfCards; // create DeckOfCards object
	deckOfCards.shuffle(); // shuffle the cards in the deck
	deckOfCards.deal(); // deal the cards in the deck
}
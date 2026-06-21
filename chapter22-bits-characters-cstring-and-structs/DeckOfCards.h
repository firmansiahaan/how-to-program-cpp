// Fig. 22.2: DeckOfCards.h
// Definition of class DeckOfCards that
// represents a deck of playing cards.
#include <string>
#include <array>

// Card structure definition
struct Card {
	std::string face;
	std::string suit;
};

// DeckOfCards class definition
class DeckOfCards {
public:
	static const int numberOfCards{ 52 };
	static const int faces{ 13 };
	static const int suits{ 4 };

	DeckOfCards(); // constructor initializes deck
	void shuffle(); // shuffles cards in deck
	void deal() const; // deals cards in deck

private:
	std::array<Card, numberOfCards> deck; // represents deck of cards
};


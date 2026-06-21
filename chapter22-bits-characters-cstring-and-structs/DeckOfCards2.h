// Fig. 22.14: DeckOfCards2.h
// Definition of class DeckOfCards that
// represents a deck of playing cards.
#include <array>

// BitCard structure definition with bit fields
struct BitCard {
	unsigned face : 4; // 4 bits; 0-15
	unsigned suit : 2; // 2 bits; 0-3
	unsigned color : 1; // 1 bit; 0-1
};

// DeckOfCards class definition
class DeckOfCards2 {
public:
	static const int faces{ 13 };
	static const int colors{ 2 }; // black and red
	static const int numberOfCards{ 52 };

	DeckOfCards2(); // constructor initializes deck
	void deal() const; // deals cards in deck
private:
	std::array<BitCard, numberOfCards> deck; // represents deck of cards
};


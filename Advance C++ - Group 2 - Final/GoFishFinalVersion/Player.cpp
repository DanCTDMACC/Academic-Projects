/*
Player class for Go Fish game.
03/23/2017
Suppose the deck is an array of 52 cards. Each card is represented by an integer in the range of 0 through 51.
Starting from 0, each 4 integers is a type of card. For example, 0 - 3 is Ace, 4 - 7 is 2, 8 - 11 is 3, and so on.
*/

#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player {
private:
	vector<int> cardOnHand, pairList;
	// finds a pair on hand to place down. Returns the index of the card found or -1 if no match exists.
	int findMatch(int indexToCompare) {
		int index = -1;
		// starts finding from the adjacent card.
		for (int i = indexToCompare + 1; (index == -1) && (i < cardOnHand.size()); i++) {
			if (cardOnHand[indexToCompare] / 4 == cardOnHand[i] / 4) index = i;
		}
		return index;
	}
	// finds a pair on hand to place down after drawing a card. Returns the index of the card found or -1 if no match exists.
	int findMatchReverse() {
		int index = -1;
		int lastCardIndex = cardOnHand.size() - 1;
		// starts finding from the last card which has just been drawn.
		for (int i = lastCardIndex - 1; (index == -1) && (i >= 0); i--) {
			if (cardOnHand[lastCardIndex] / 4 == cardOnHand[i] / 4) index = i;
		}
		return index;
	}
	// finds a card on hand when being asked. Returns the value of the card found or -1 if no match card exists.
	int getCard(int cardToFind) {
		int index = -1;
		int cardValue = -1;
		// finds in all the cards on hand.
		for (int i = 0; (index == -1) && (i < cardOnHand.size()); i++) {
			if (cardToFind == cardOnHand[i] / 4) index = i;
		}
		// removes the card from hand and returns the card to the call.
		if (index != -1) {
			cardValue = cardOnHand[index];
			cardOnHand[index] = cardOnHand[cardOnHand.size() - 1];
			cardOnHand.pop_back();
		}
		return cardValue;
	}
	// finds a card on hand when being asked. Returns the value of the card found or -1 if no match card exists.
	int findCardOnHand(int cardToFind) {
		int index = -1;
		int cardValue = -1;
		// finds in all the cards on hand.
		for (int i = 0; (index == -1) && (i < cardOnHand.size()); i++) {
			if (cardToFind == cardOnHand[i] / 4) index = i;
		}
		// removes the card from hand and returns the card to the call.
		if (index != -1) {
			cardValue = cardOnHand[index];
		}
		return cardValue;
	}

	// Function to decode cards.
	string decodeCard(int cardCode) {
		string cardName = "";
		switch (cardCode / 4) {
		case 0:
			cardName = "A";
			break;
		case 1:
			cardName = "2";
			break;
		case 2:
			cardName = "3";
			break;
		case 3:
			cardName = "4";
			break;
		case 4:
			cardName = "5";
			break;
		case 5:
			cardName = "6";
			break;
		case 6:
			cardName = "7";
			break;
		case 7:
			cardName = "8";
			break;
		case 8:
			cardName = "9";
			break;
		case 9:
			cardName = "10";
			break;
		case 10:
			cardName = "J";
			break;
		case 11:
			cardName = "Q";
			break;
		case 12:
			cardName = "K";
			break;
		}
		/*
		cardName += " ";
		switch (cardCode % 4) {
		case 0:
		cardName += "Clubs";
		break;
		case 1:
		cardName += "Diamonds";
		break;
		case 2:
		cardName += "Hearts";
		break;
		case 3:
		cardName += "Spades";
		break;
		}
		*/
		return cardName;
	}

public:
	// Constructor.
	Player() {
		cardOnHand.clear();
		pairList.clear();
	}
	// places the pair found on hand after deal.
	void placePairAfterDeal() {
		int indexToFind = 0, pairedIndex;		// The index of the card to find a match, and the index of the match card.
		for (int i = indexToFind; i < cardOnHand.size() - 1; i++) {
			pairedIndex = findMatch(i);
			if (pairedIndex != -1) {
				// Adds to the list of pairs.
				pairList.push_back(cardOnHand[i]);
				pairList.push_back(cardOnHand[pairedIndex]);
				// Pops the two card from the hand.
				if (pairedIndex == (cardOnHand.size() - 1)) {
					cardOnHand[i] = cardOnHand[cardOnHand.size() - 2];
				}
				else {
					cardOnHand[i] = cardOnHand[cardOnHand.size() - 1];
					cardOnHand[pairedIndex] = cardOnHand[cardOnHand.size() - 2];
				}
				i--;						// Next time, finds at the index of this card.
				cardOnHand.pop_back();
				cardOnHand.pop_back();
			}
		}
	}
	// places the pair found on hand after draw or get a card from a player.
	void placePair() {
		int pairedIndex = findMatchReverse();
		if (pairedIndex != -1) {
			// Adds to the list of pairs.
			pairList.push_back(cardOnHand[cardOnHand.size() - 1]);
			pairList.push_back(cardOnHand[pairedIndex]);
			// Pops the two card from the hand.
			cardOnHand[pairedIndex] = cardOnHand[cardOnHand.size() - 2];
			cardOnHand.pop_back();
			cardOnHand.pop_back();
		}
	}
	// gets the number of pair the player has.
	int getPairCount() {
		return pairList.size() / 2;
	}

	// gets pair list.
	void displayPairList() {
		if (pairList.size() > 0) {
			cout << "Pair list: ";
			for (int i = 0; i < pairList.size() != 0; i++) {
				cout << " " << decodeCard(pairList[i]);
			}
		}
		else {
			cout << "No pair.";
		}
		cout << endl;
	}
	// gets the number of cards on the hand of the player.
	int getNumCardOnHand() {
		return cardOnHand.size();
	}
	// displays cards on hand.
	void displayOnHandCards() {
		if (cardOnHand.size() > 0) {
			cout << "Cards on hand:";
			for (int i = 0; i < cardOnHand.size(); i++) {
				cout << " " << decodeCard(cardOnHand[i]);
			}
		}
		else {
			cout << "No more card on hand.";
		}
		cout << endl;
	}
	/*
	askCard() is not totally right in terms of algorithm due to the case structure check characters, and 10 cannot be check the same way.
	The validation breaks the possibility into 4 ways:
	1. wrong card name
	2. right card name but not holding the card
	3. right card name, have the card, and no card back
	4. right card name, have the card, and card back.
	Right now, 1, 2, and 4 are treated the same.
	*/
	// asks for a card from the player p.
	bool askCard(int cardToAsk, Player &p) {
		bool gotCard = true;
		int cardType = cardToAsk / 4;
		int cardBack = p.getCard(cardType);						// Find if the asked player has the card.
		if (cardBack != -1) {									// That player has the card.
			cardOnHand.push_back(cardBack);
			//placePair();
			//cout << "You got a card from your opponent.\n\n";
		}
		else {												// That player doesn't have the card.
			gotCard = false;
			//cout << "GO FISH!!!\n\n";
		}
		return gotCard;
	}
/*
	bool askCardString(string cardToAsk, Player &p) {
		bool gotCard = true;
		int cardType;
		// Assigns an integer which represents a card type.
		if (cardToAsk == "a" || cardToAsk == "A") {
			cardType = 0;
		}
		else if (cardToAsk == "2") {
			cardType = 1;
		}
		else if (cardToAsk == "3") {
			cardType = 2;
		}
		else if (cardToAsk == "4") {
			cardType = 3;
		}
		else if (cardToAsk == "5") {
			cardType = 4;
		}
		else if (cardToAsk == "6") {
			cardType = 5;
		}
		else if (cardToAsk == "7") {
			cardType = 6;
		}
		else if (cardToAsk == "8") {
			cardType = 7;
		}
		else if (cardToAsk == "9") {
			cardType = 8;
		}
		else if (cardToAsk == "10") {
			cardType = 9;
		}
		else if (cardToAsk == "j" || cardToAsk == "J") {
			cardType = 10;
		}
		else if (cardToAsk == "q" || cardToAsk == "Q") {
			cardType = 11;
		}
		else if (cardToAsk == "k" || cardToAsk == "K") {
			cardType = 12;
		}
		else {
			cardType = -1;
		}
		// Find if the asking player has the card.
		int haveCard = findCardOnHand(cardType);
		if (haveCard != -1) {											// Has the card.
			int cardBack = p.getCard(cardType);						// Find if the asked player has the card.
			if (cardBack != -1) {									// That player has the card.
				cardOnHand.push_back(cardBack);
				placePair();
				cout << "You got a card from your opponent.\n\n";
			}
			else {												// That player doesn't have the card.
				gotCard = false;
				cout << "GO FISH!!!\n\n";
			}
		}
		else if (cardType != -1) {										// not have the card.
			cout << "You don't have the card.\n\n";
		}
		else {														// Asking the wrong card.
			cout << "Wrong card name.\n\n";
		}
		return gotCard;
	}
*/
	// draws a card from the deck.
	void drawCard(vector<int> &deck) {
		srand(time(0));
		int indexToDraw = rand() % deck.size();
		cardOnHand.push_back(deck[indexToDraw]);
		deck[indexToDraw] = deck[deck.size() - 1];
		deck.pop_back();
	}
	vector<int> getCardsOnHand() {
		return cardOnHand;
	}
	vector<int> getPairList() {
		return pairList;
	}
};

#endif /* PLAYER_H */

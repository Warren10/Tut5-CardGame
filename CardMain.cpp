#include "DeckOfCards.h"
#include "Card.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdio>

using namespace std;

int main()
{
	DeckOfCards *Deck = new DeckOfCards();
	Deck->print();
	cout << "The number of cards remains is: " << Deck->numberOfCards() << endl;

	cout << "Peek: " << endl;
	Deck->peek();
	cout << endl;

	cout << "shuffle: " << endl;
	Deck->shuffle();
	Deck->print();
	cout << endl;

	cout << "Draw: " << endl;
	Deck->draw();
	cout << endl;
	Deck->print();
	cout << endl;

	return 0;


}
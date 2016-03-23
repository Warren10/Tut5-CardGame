#include "DeckOfCards.h"
#include "Card.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;


DeckOfCards::DeckOfCards()
{
	totalcards = 20;
	ptrCard = new Card[totalcards];

	for (int i = 0; i < 10; i++)
	{
		ptrCard[i] = Card(i + 1, "Red");

		ptrCard[10 + i] = Card(i + 1, "Black");
	}
}


DeckOfCards::~DeckOfCards()
{
	delete[] ptrCard;
}

DeckOfCards DeckOfCards::reset()
{
	return DeckOfCards();
}

void DeckOfCards::shuffle()
{
	int rndm1;
	int rndm2;
	Card temp;
	srand(time(0));
	if (totalcards >= 2)
	{
		for (int i = 0; i < 50; i++)
		{
			rndm1 = rand() % totalcards;
			rndm2 = rand() % totalcards;

			temp = ptrCard[rndm1];
			ptrCard[rndm1] = ptrCard[rndm2];
			ptrCard[rndm2] = temp;
		}
	}
}

Card DeckOfCards::draw()
{
	Card  temp;
	temp = ptrCard[totalcards - 1];
	totalcards--;
	return temp;
	delete &temp;

}

Card DeckOfCards::peek()
{
	ptrCard[totalcards - 1].print();
	return ptrCard[totalcards - 1];
}

int DeckOfCards::numberOfCards()
{
	return totalcards;
}

void DeckOfCards::print()
{
	int i;
	for (i = 0; i < totalcards; i++);
	{
		ptrCard[i].print();
		cout << endl;
	}
}



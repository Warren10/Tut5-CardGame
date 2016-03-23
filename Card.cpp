#include "Card.h"

#include<iostream>
#include <string>

using namespace std;

Card::Card()
{

}

Card::Card(int n, string c)
{
	cardnum = n;
	cardcolour = c;

}


Card::~Card()
{
}

string Card::colour()
{
	return cardcolour;
}

int Card::number()
{
	return cardnum;
}

void Card::print()
{
	cout << cardcolour << " " << cardnum << endl;

} 
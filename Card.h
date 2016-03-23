#pragma once

#include <iostream>
#include <string>

using namespace std;

class Card
{
private:
	int cardnum;
	string cardcolour = NULL;

public:
	Card();
	Card(int n, string c);
	~Card();
	string colour();        // returns the card colour
	int number();
	void print();

};


// CountingCards.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int getNumDecks();

int main()
{
	//INIT ALL CARDS
	double hearts[13], diamonds[13], spades[13], clubs[13];
	for (int i = 0; i < 13; i++)
	{
		hearts[i] = 100;
		diamonds[i] = 100;
		spades[i] = 100;
		clubs[i] = 100;
	}

	//INIT TEMP VARIABLES FOR EACH ITERATION
	string cardsSeen;
	int numDecks;
	

	numDecks = getNumDecks();
	

	//GAME LOOP
	cout << "\nQ - Quit\n? - Help\n\n";

	while (true)
	{
		cout << "INPUT CARDS SEEN\n-> ";
		cout << "-> ";
		getline(cin, cardsSeen);


	}

	//OUTPUT RESULTS
	

}

int getNumDecks()
{
	int numDecks;
	cout << "Input Number of Decks" << endl << "-> ";
	cin >> numDecks;
	return numDecks;
}

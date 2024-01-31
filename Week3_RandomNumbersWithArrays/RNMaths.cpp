#include "RNMaths.h"
#include <cstdlib> // provides rand(), srand()
#include <iostream>
using namespace std;

void RNMaths::generateRN()
{
	// int aNumber = -1;
	int total = 0; // running total of all the random numbers
	int myNumbers[20]; // array of 20 int

	srand(time(0)); // generator seeded with the current seconds since
				// epoch (1st January, 1970)
	for (int i = 0; i < 20; i++)
	{
		myNumbers[i] = rand();
		cout << "Random Number " << i+1 << ": " << myNumbers[i] << endl;
	}

	for (int i = 0; i < 20; i++)
	{
		total = total + myNumbers[i];
	}
	cout << "\nGrand total: " << total << endl;
}
#pragma once

class RNMaths
{
private:
	int myNumbers[20]; // array of 20 int
	int total = 0;

public:
	void generateRN();
	void calcTotal();
	void addTenTotal();
	void displayArrayTotal();
};
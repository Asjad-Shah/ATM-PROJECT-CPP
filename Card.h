#pragma once
#include<iostream>
using namespace std;
class Card
{
private:
	int cardnum;
	int pin;
public:
	Card();
	Card(int, int);
	Card(const Card&);
	void SetCardNumber(int);
	void SetPin(int);
	int GetCardNumber();
	int GetPin();
	void GenerateCardNumber();
	void Display();
	~Card();
};


#include "Atm.h"
#include <iostream>
using namespace std;

Atm::Atm()
{
	flag = 0;
}
void Atm::CheckInput(User& u)
{
	int num = 0;
	cout << "Enter Account Number: ";
	cin >> num;
	int pin = 0;
	cout << "Enter Card Pin: ";
	cin >> pin;
	if ((num - u.card.GetCardNumber()) == 0 && (pin - u.card.GetPin()) == 0)
	{
		flag = 1;
	}
}
bool Atm::Check()
{
	if (flag)
	{
		return true;
	}
	else {
		return false;
	}
}
void Atm::SetFlag(int f)
{
	flag = f;
}
#pragma once
#include "Atm.h"
#include <iostream>
using namespace std;
class ComplexATM: public Atm
{
public:
	ComplexATM();
	ComplexATM(User&);
	void operator-(User&);
	void operator*(User&);
	void operator%(User&);
	void operator^(User&);
	void ChangePin(User&);
	void Transfer(User&);
	void BalanceInquery(User&);
	void Withdraw(User&);
	void DisplayInfo(User&);
	void Display(User&);
	void Menu();
};


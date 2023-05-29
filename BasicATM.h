#pragma once
#include "Atm.h"

class BasicATM:public Atm
{
public:
	BasicATM(User& u);
	void Withdraw(User&);
	void DisplayInfo(User&);
	void Display(User&);
	void Menu();
};


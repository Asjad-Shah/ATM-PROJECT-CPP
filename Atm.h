#pragma once
#include"User.h"
#include "BankAccount.h"
#include "CheckingAccount.h"
#include "SavingAccount.h"
#include"Card.h"
class Atm
{
private:
	User u;
	int flag;
public:
	Atm();
	void CheckInput(User& u);
	bool Check();
	void SetFlag(int);
	virtual void Withdraw(User&) = 0;
	virtual void DisplayInfo(User&) = 0;
	virtual void Display(User&) = 0;
	virtual void Menu() = 0;
};


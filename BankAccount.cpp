#include "BankAccount.h"
#include<iostream>
using namespace std;

BankAccount::BankAccount()
{
	name = nullptr;
	branch = nullptr;
	cash = 0.0;
}
BankAccount::BankAccount(char* n, char* b, float c)
{
	Strcopy(name, n);
	Strcopy(branch, b);
	cash = c;
}
BankAccount::BankAccount(BankAccount& obj)
{
	Strcopy(name, obj.name);
	Strcopy(branch, obj.branch);
	cash = obj.cash;
}
void BankAccount::SetBankName(char* n)
{
	if (name)
	{
		delete[] name;
		name = nullptr;
	}
	Strcopy(name, n);
}
void BankAccount::SetBankBranch(char* b)
{
	if (branch)
	{
		delete[] branch;
		branch = nullptr;
	}
	Strcopy(branch, b);
}
void BankAccount::SetCash(float c)
{
	cash = c;
}
char* BankAccount::GetBankName()
{
	char* temp = new char[Strlen(name) + 1];
	Strcopy(temp, name);
	return temp;
}
char* BankAccount::GetBankBranch()
{
	char* temp = new char[Strlen(branch) + 1];
	Strcopy(temp, branch);
	return temp;
}
float BankAccount::GetCash()
{
	return cash;
}
void BankAccount::Deposit(float d)
{
	cash += d;
}
void BankAccount::Withdraw(float w)
{
	if (cash > w)
	{
		cash -= w;
	}
	else
	{
		cout << " ==> Insufficient Balance <==" << endl;
	}
}
void BankAccount::Display()
{
	cout << "Bank Name: " << GetBankName() << endl;
	cout << "Bank Branch: " << GetBankBranch() << endl;
	cout << "Balance: " << GetCash() <<" PKR" << endl;
}
BankAccount::~BankAccount()
{
	/*delete[] name;
	name = nullptr;
	delete[] branch;
	branch = nullptr;
	cash = 0.0;*/
}
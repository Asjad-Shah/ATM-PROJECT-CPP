#include <iostream>
#include "User.h"
#include "BasicATM.h"
#include "ComplexATM.h"
#include "Atm.h"
using namespace std;

ostream& operator<<(ostream& Cout, SavingAccount& s)
{
	s.BankAccount::Display();
	Cout << "Interest Rate: " << s.GetInterestRate() << "%" << endl;
	Cout << endl;
	return Cout;
}
istream& operator>>(istream& Cin, SavingAccount& s)
{
	char* name = new char[50];
	cout << "Enter Bank Name: ";
	Cin >> name;
	Cin.ignore();
	s.SetBankName(name);
	char* branch = new char[50];
	cout << "Enter Bank Branch: ";
	Cin.getline(branch, 50);
	s.SetBankBranch(branch);
	float bal = 0.0;
	cout << "Enter Amount You Want to Add: ";
	Cin >> bal;
	s.SetCash(bal);
	s.SetInterestRate(5);

	return Cin;
}
ostream& operator<<(ostream& Cout, CheckingAccount& c)
{
	c.BankAccount::Display();
	Cout << "Fee: " << c.GetFee() << " PKR" << endl;
	Cout << endl;
	return Cout;
}
istream& operator>>(istream& Cin, CheckingAccount& c)
{
	char* name = new char[50];
	cout << "Enter Bank Name: ";
	Cin >> name;
	c.SetBankName(name);
	char* branch = new char[50];
	cout << "Enter Bank Branch: ";
	Cin.ignore();
	Cin.getline(branch, 50);
	c.SetBankBranch(branch);
	float bal = 0.0;
	cout << "Enter Amount You Want to Add: ";
	Cin >> bal;
	c.SetCash(bal);
	c.SetFee(25);

	return Cin;
}

ostream& operator<<(ostream& Cout, Card& c)
{
	Cout << "Your Card Number: " << c.GetCardNumber() << endl;
	Cout << "Your Pin: " << c.GetPin() << endl;
	return Cout;
}
istream& operator>>(istream& Cin, Card& c)
{
	c.GenerateCardNumber();
	int pin = 0;
	cout << "Enter Your Card Pin: ";
	Cin >> pin;
	c.SetPin(pin);
	return Cin;
}
ostream& operator<<(ostream& Cout,User& u)
{
	Cout << endl;
	Cout << "Your name : " << u.GetName() << endl;
	Cout << "Your Address : " << u.GetAddress() << endl;
	Cout << "Your Phone Number : " << u.GetPhoneNumber() << endl;
	if (u.GetType() == 's' || u.GetType() == 'S')
	{
		Cout << u.saving;
		Cout << u.card;
	}
	if (u.GetType() == 'c' || u.GetType() == 'C') 
	{
		Cout << u.checking;
		Cout << u.card;
	}
	Cout << endl;
	return Cout;
}
istream& operator>>(istream& Cin, User& u)
{
	u.name = new char[50];
	cout << "Enter your Name: ";
	Cin.getline(u.name, 50);
	u.address = new char[100];
	cout << "Enter Your Address: ";
	Cin.getline(u.address, 100);
	cout << "Enter Your Phone Number: ";
	Cin >> u.phonenum;
	char choice = '\0';
	cout << "Select Account Type: " << endl;
	cout << "Press S/s for Saving Account " << endl;
	cout << "Press C/c for Checking Account " << endl;
	cout << "Choice: ";
	Cin >> choice;
	u.SetType(choice);

	if (choice == 's' || choice == 'S') 
	{
		Cin >> u.saving;
		Cin >> u.card;
	}
	else if (choice == 'c' || choice == 'C')
	{
		Cin >> u.checking;
		Cin >> u.card;
	}
	else 
	{
		cout << "Invalid Account Type." << endl;
	}
	return Cin;
}
int main()
{
	User u1;
	cout << "\n\t\t\tPlease Enter Data of User " << endl;
	cin >> u1;
	cout << u1;
	BasicATM* B1=new BasicATM(u1);
	ComplexATM* c1=new ComplexATM(u1);
	return 0;
}
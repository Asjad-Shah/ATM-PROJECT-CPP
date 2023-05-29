#include "BasicATM.h"
#include <iostream>
using namespace std;

BasicATM::BasicATM(User& u)
{
	while (1) {
		Menu();
		int choice = 0;
		cout << "Your Choice? ";
		cin >> choice;
		if (choice == 1) {
			SetFlag(0);
			CheckInput(u);
			if (Check()) {
				cout << endl;
				Withdraw(u);
				Display(u);
				cout << endl;
			}
			else {
				cout << "Incorrect Details Entered!" << endl;
			}
		}
		else if (choice == 2) {
			SetFlag(0);
			CheckInput(u);
			cout << endl;
			DisplayInfo(u);
			cout << endl;
		}
		else if (choice == 0) {
			cout << "Thanks For Using Atm." << endl;
			break;
		}
		else {
			cout << "Invalid Choice! " << endl;
			cout << endl;
		}
	}
}
void BasicATM::Withdraw(User& u)
{
	float bal = 0.0;
	cout << "Enter Amount You Want to Withdraw: ";
	cin >> bal;
	if (u.GetType() == 'c' || u.GetType() == 'C')
	{
		u.checking.Withdraw(bal);
	}
	if (u.GetType() == 's' || u.GetType() == 'S')
	{
		u.saving.Withdraw(bal);
	}
}
void BasicATM::Display(User& u)
{
	cout << " --> RECIEPT <-- " << endl;
	cout << "Date: 31/8/2021" << endl;
	cout << "Time: 12:00 pm" << endl;
	cout << "Machine Location: Lahore" << endl;
	if (u.GetType() == 'c' || u.GetType() == 'C') {
		cout << "Type: Checking" << endl;
	}
	else {
		cout << "Type: Saving" << endl;
	}
	cout << "Account Number: " << u.card.GetCardNumber() << endl;
	if (u.GetType() == 'c' || u.GetType() == 'C') {
		cout << "Remaining Balance: " << u.checking.GetCash() << endl;
		cout << "Withdrawl Fee: " << u.checking.GetFee() <<" PKR" << endl;
	}
	else {
		cout << "Remaining Balance: " << u.saving.GetCash() << endl;
		cout << "Withdrawl Interest: " << u.saving.GetInterestRate() <<"%" << endl;
	}
}
void BasicATM::DisplayInfo(User& u)
{
	cout << endl;
	cout << " --> Details <-- " << endl;
	cout << "Account Number: " << u.card.GetCardNumber() << endl;
	cout << "Pin: ****" << endl;
	if (u.GetType() == 'c' || u.GetType() == 'C') {
		cout << "Balance: " << u.checking.GetCash() << endl;
	}
	else {
		cout << "Balance: " << u.saving.GetCash() << endl;
	}
}
void BasicATM::Menu()
{
	cout << endl;
	cout << "Press 1 to withdrawal" << endl;
	cout << "Press 2 to display information" << endl;
	cout << "Press 0 to Exit" << endl;
	cout << endl;
}
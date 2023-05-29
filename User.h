#pragma once
#include <iostream>
using namespace std;
#include "Card.h"
#include "SavingAccount.h"
#include "CheckingAccount.h"

class User
{
private:
	int Strlen(char* ptr) {
		int i = 0;
		while (ptr[i] != '\0') {
			i++;
		}
		return i;
	}
	void Strcopy(char*& ptr, char* arr) {
		ptr = new char[Strlen(arr) + 1];
		for (int i = 0; i < Strlen(arr); ++i) {
			ptr[i] = arr[i];
		}
		ptr[Strlen(arr)] = '\0';
	}
	char* temp = new char[10]{ '\0' };
public:
	Card card;
	SavingAccount saving;
	CheckingAccount checking;
	char* name;
	char* address;
	int phonenum;
	char type;
	User();
	User(User&);
	void SetName(char*);
	void SetAddress(char*);
	void SetPhoneNumber(int);
	void SetType(char);
	char* GetName();
	char* GetAddress();
	int GetPhoneNumber();
	char GetType();
	void Display();
	~User();
};


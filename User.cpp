#include "User.h"
#include <iostream>
using namespace std;

User::User()
{
	name = nullptr;
	address = nullptr;
	phonenum = 0;
	type = '\0';
}
User::User(User& obj)
{
	Strcopy(name, obj.name);
	Strcopy(address, obj.address);
	phonenum = obj.phonenum;
	type = obj.type;
}
void User::SetName(char* n)
{
	if (name)
	{
		delete[] name;
		name = nullptr;
	}
	Strcopy(name, n);
}
void User::SetAddress(char* a)
{
	if (address)
	{
		delete[] address;
		address = nullptr;
	}
	Strcopy(address, a);
}
void User::SetPhoneNumber(int p)
{
	phonenum = p;
}
void User::SetType(char c)
{
	type = c;
}
char* User::GetName()
{
	char* temp = new char[Strlen(name) + 1];
	Strcopy(temp, name);
	return temp;
}
char* User::GetAddress()
{
	char* temp = new char[Strlen(address) + 1];
	Strcopy(temp, address);
	return temp;
}
int User::GetPhoneNumber()
{
	return phonenum;
}
char User::GetType()
{
	return type;
}
void User::Display()
{
	cout << "User name: " << name << endl;
	cout << name << "'s Address: " << address << endl;
	cout << name << "'s Phone Number: " << phonenum << endl;
	cout << endl;
}
User::~User()
{
}
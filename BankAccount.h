#pragma once
class BankAccount
{
private:
	char* name;
	char* branch;
	float cash;
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
public:
	BankAccount();
	BankAccount(char*, char* , float);
	BankAccount(BankAccount&);
	void SetBankName(char*);
	void SetBankBranch(char*);
	void SetCash(float);
	char* GetBankName();
	char* GetBankBranch();
	float GetCash();
	virtual void Deposit(float) = 0;
	virtual void Withdraw(float) = 0;
	virtual void Display() = 0;
	~BankAccount();
};

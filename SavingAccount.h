#pragma once
#include "BankAccount.h"
#include <iostream>
using namespace std;
class SavingAccount :public BankAccount
{
private:
    float interest;
public:
    SavingAccount();
    SavingAccount(float , char* , char* , float );
    SavingAccount(SavingAccount&);
    void SetInterestRate(float);
    float GetInterestRate();
    float CalculateInterest();
    void Deposit(float);
    void Withdraw(float);
    void Display();
    ~SavingAccount();
};


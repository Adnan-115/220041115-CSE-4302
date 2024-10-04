#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include<iostream>
#include<string>

using namespace std;

class SavingsAccount
{
    public:
        SavingsAccount();
        void setName(const string& s);
        string getName() const;
        void setAddress(const string& c);
        string getAddress() const;
        void setInterest(double d);
        double getInterest() const;
        void setBalance(double b);
        double getBalance() const;
        void deposit(double amount);
        void withdraw(double amount);
        double calculateInterest(int periodInMonths);
        void disburseInterest(double a);

        ~SavingsAccount();

    private:
        string accountName;
        string address;
        double interest;
        double balance;
        double min_balance;
};

#endif // SAVINGSACCOUNT_H

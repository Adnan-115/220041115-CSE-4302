#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<iostream>

using namespace std;


class Account
{
    public:
        Account();
        Account(string s, float b);
        ~Account();
        void setbalance(float b);
        float getbalance()const;
        void setname(string s);
        string getname()const;
        void setaccountNo(string s);
        string getaccountNo()const;
        void description()const;

    protected:

    private:
        string accountName;
        float balance;
        string accountNo;

};

#endif // ACCOUNT_H

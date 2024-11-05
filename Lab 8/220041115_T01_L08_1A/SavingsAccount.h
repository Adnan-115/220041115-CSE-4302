#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "Account.h"

class SavingsAccount:public Account
{
    public:
        SavingsAccount();
         ~SavingsAccount();
         float getinterestRate()const;
         int getmonthlyDepositAmount()const;
         string getaccountPrefix()const;
         void setinterestRate(float f);
         void setmonthlyDepositAmount(int a);
         void description();


    protected:

    private:
        float interestRate;
        int monthlyDepositAmount;
        const static string AccountPrefix;
        static int nextAccount;
        string nextAccountNo(string s,int nextAccount);
};


#endif // SAVINGSACCOUNT_H

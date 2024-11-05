#ifndef LOANACCOUNT_H
#define LOANACCOUNT_H
#include "Account.h"

class LoanAccount:public Account
{
    public:
        LoanAccount();
        ~LoanAccount();
        float getinterestRate()const;
        int getmonthlyDepositAmount()const;
        string getaccountPrefix()const;
        void setinterestRate(float f);
        void setmonthlyDepositAmount(int a);
        void description()const;

    protected:

    private:
        float interestRate;
        int monthlyDepositAmount;
        const static string AccountPrefix;
        static int nextAccount;
        string nextAccountNo(string s,int nextAccount);
};


#endif // LOANACCOUNT_H

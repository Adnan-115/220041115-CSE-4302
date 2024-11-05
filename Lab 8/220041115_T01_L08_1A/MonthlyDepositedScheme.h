#ifndef MONTHLYDEPOSITEDSCHEME_H
#define MONTHLYDEPOSITEDSCHEME_H
#include "Account.h"

class MonthlyDepositedScheme: public Account
{
    public:
        MonthlyDepositedScheme();
        ~MonthlyDepositedScheme();
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


#endif // MONTHLYDEPOSITEDSCHEME_H

#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H
#include "Account.h"

class CurrentAccount: public Account
{
    public:
        CurrentAccount();
        ~CurrentAccount();
                void description()const;

    protected:

    private:
        const static int ServiceCharge_cur;
        const static string AccountPrefix_cur;
        static int nextAccount_cur;
        string nextAccountNo(string s,int nextAccount);

};


#endif // CURRENTACCOUNT_H

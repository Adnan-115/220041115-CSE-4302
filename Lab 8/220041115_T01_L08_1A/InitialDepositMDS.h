#ifndef INITIALDEPOSITMDS_H
#define INITIALDEPOSITMDS_H
#include "MonthlyDepositedScheme.h"

class InitialDepositMDS: public MonthlyDepositedScheme
{
    public:
        InitialDepositMDS();
        ~InitialDepositMDS();
        InitialDepositMDS(float f, int n);
        void setint(float f);
        void setdep(int n);
        float getint()const;
        int getdept()const;

    protected:

    private:
        float maxint;
        int ini_dep;
};

#endif // INITIALDEPOSITMDS_H

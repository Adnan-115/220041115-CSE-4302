#ifndef TWOYEARMDS_H
#define TWOYEARMDS_H
#include "MonthlyDepositedScheme.h"



class TwoYearMDS:public MonthlyDepositedScheme
{
    public:
        TwoYearMDS();
        TwoYearMDS(float f);
        ~TwoYearMDS();
        void setmax(float s);
        float getmax()const;

    protected:

    private:
        float maximuminterest;
};

#endif // TWOYEARMDS_H

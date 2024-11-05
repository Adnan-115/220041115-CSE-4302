#ifndef FIVEYEARMDS_H
#define FIVEYEARMDS_H
#include "MonthlyDepositedScheme.h"


class FiveYearMDS:public MonthlyDepositedScheme
{
    public:
        FiveYearMDS();
        ~FiveYearMDS();
        FiveYearMDS(float f);
        void setmax(float s);
        float getmax()const;

    protected:

    private:
        float maximuminterest;
};

#endif // FIVEYEARMDS_H

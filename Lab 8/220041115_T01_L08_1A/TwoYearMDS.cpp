#include "TwoYearMDS.h"


TwoYearMDS::TwoYearMDS()
{
    //ctor
}
TwoYearMDS::TwoYearMDS(float f):maximuminterest(f){
    maximuminterest=f;
}

TwoYearMDS::~TwoYearMDS()
{
    //dtor
}
void TwoYearMDS::setmax(float f){
    maximuminterest=f;
}
float TwoYearMDS::getmax()const{
    return maximuminterest;
}

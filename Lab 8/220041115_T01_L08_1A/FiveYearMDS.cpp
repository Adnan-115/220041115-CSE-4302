#include "FiveYearMDS.h"

FiveYearMDS::FiveYearMDS()
{
    //ctor
}
FiveYearMDS::FiveYearMDS(float f):maximuminterest(f){
}
FiveYearMDS::~FiveYearMDS()
{
    //dtor
}
void FiveYearMDS::setmax(float f){
    maximuminterest=f;
}
float FiveYearMDS::getmax()const{
    return maximuminterest;
}

#include "InitialDepositMDS.h"

InitialDepositMDS::InitialDepositMDS()
{
    //ctor
}
InitialDepositMDS::InitialDepositMDS(float f, int n):maxint(f),ini_dep(n){
}
InitialDepositMDS::~InitialDepositMDS()
{
    //dtor
}
void InitialDepositMDS:: setint(float f){
    if(f>0){
        maxint=f;
    }
}
void InitialDepositMDS:: setdep(int n){
    if(n>0){
        ini_dep=n;
    }
}
float InitialDepositMDS::getint()const{
    return maxint;
}
int InitialDepositMDS:: getdept()const{
    return ini_dep;
}

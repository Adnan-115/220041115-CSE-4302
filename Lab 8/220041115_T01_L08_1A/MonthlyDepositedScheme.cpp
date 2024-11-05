#include "MonthlyDepositedScheme.h"
#include<string>
const string MonthlyDepositedScheme:: AccountPrefix="300";
int MonthlyDepositedScheme::nextAccount=0;
MonthlyDepositedScheme::MonthlyDepositedScheme()
{
    //ctor
    string s=nextAccountNo(AccountPrefix,nextAccount);
    setaccountNo(s);
    nextAccount++;
}

MonthlyDepositedScheme::~MonthlyDepositedScheme()
{
    //dtor
}
float MonthlyDepositedScheme:: getinterestRate() const{
    return interestRate;
}
int MonthlyDepositedScheme:: getmonthlyDepositAmount()const{
    return monthlyDepositAmount;
}
string MonthlyDepositedScheme:: getaccountPrefix()const{
    return AccountPrefix;
}
void MonthlyDepositedScheme:: setinterestRate(float f){
    if(f>0){
        interestRate=f;
    }
}
void MonthlyDepositedScheme:: setmonthlyDepositAmount(int a){
    if(a>0){
        monthlyDepositAmount=a;
    }
}
string MonthlyDepositedScheme:: nextAccountNo(string s, int n){
    string newAcc= s+ "-" + to_string(n);
    return newAcc;
}
void MonthlyDepositedScheme:: description()const{
    cout<<"Monthly Account"<<endl;
}

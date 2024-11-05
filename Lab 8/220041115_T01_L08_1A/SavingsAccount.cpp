#include "SavingsAccount.h"
#include<string>
const string SavingsAccount:: AccountPrefix="200";
int SavingsAccount::nextAccount=0;

SavingsAccount::SavingsAccount()
{
    //ctor
    string s=nextAccountNo(AccountPrefix,nextAccount);
    setaccountNo(s);
    nextAccount++;
}

SavingsAccount::~SavingsAccount()
{
    //dtor
}

float SavingsAccount:: getinterestRate() const{
    return interestRate;
}
int SavingsAccount:: getmonthlyDepositAmount()const{
    return monthlyDepositAmount;
}
string SavingsAccount:: getaccountPrefix()const{
    return AccountPrefix;
}
void SavingsAccount:: setinterestRate(float f){
    if(f>0){
        interestRate=f;
    }
}
void SavingsAccount:: setmonthlyDepositAmount(int a){
    if(a>0){
        monthlyDepositAmount=a;
    }
}
string SavingsAccount:: nextAccountNo(string s, int n){
    string newAcc= s+ "-" + to_string(n);
    return newAcc;
}
void SavingsAccount::description(){
    cout<<"Savings Account"<<endl;
}

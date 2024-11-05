#include "LoanAccount.h"
#include<string>
const string LoanAccount:: AccountPrefix="900";
int LoanAccount::nextAccount=0;
LoanAccount::LoanAccount()
{
    //ctor
    string s=nextAccountNo(AccountPrefix,nextAccount);
    setaccountNo(s);
    nextAccount++;
}

LoanAccount::~LoanAccount()
{
    //dtor
}
float LoanAccount:: getinterestRate() const{
    return interestRate;
}
int LoanAccount:: getmonthlyDepositAmount()const{
    return monthlyDepositAmount;
}
string LoanAccount:: getaccountPrefix()const{
    return AccountPrefix;
}
void LoanAccount:: setinterestRate(float f){
    if(f>0){
        interestRate=f;
    }
}
void LoanAccount:: setmonthlyDepositAmount(int a){
    if(a>0){
        monthlyDepositAmount=a;
    }
}
string LoanAccount:: nextAccountNo(string s, int n){
    string newAcc= s+ "-" + to_string(n);
    return newAcc;
}
void LoanAccount::description()const{
    cout<<"Loan Account"<<endl;
}

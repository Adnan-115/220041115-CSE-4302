#include "CurrentAccount.h"
#include<iostream>
#include<string>

const int CurrentAccount::ServiceCharge_cur = 100;
const string CurrentAccount::AccountPrefix_cur = "100";
int CurrentAccount::nextAccount_cur = 0;

CurrentAccount::CurrentAccount()
{
    //ctor
    string s=nextAccountNo(AccountPrefix_cur,nextAccount_cur);
    setaccountNo(s);
    nextAccount_cur++;
}

CurrentAccount::~CurrentAccount()
{
    //dtor
}
string CurrentAccount:: nextAccountNo(string s, int n){
    string newAcc= s+ "-" + to_string(n);
    return newAcc;
}
void CurrentAccount::description()const{
    cout<<"Current Account it iz"<<endl;
}


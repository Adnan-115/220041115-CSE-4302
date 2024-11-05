#include<iostream>
#include "Account.h"
using namespace std;


Account::Account()
{
    //ctor
}

Account::~Account()
{
    //dtor
}
Account:: Account(string s,float b):accountName(s),balance(b){
}

float Account::getbalance()const{
    return balance;
}
void Account:: setbalance(float s){
    if(s>0){
        balance=s;
    }

}
void Account::setname(string s){
    accountName=s;
}
string Account:: getname()const{
    return accountName;
}
void Account:: setaccountNo(string s){
    accountNo=s;
}
string Account:: getaccountNo()const{
    return accountNo;
}
void Account::description()const{
    cout<<"Base Class Account"<<endl;
}

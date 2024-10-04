#include "SavingsAccount.h"
#include<iostream>
#include<string>

SavingsAccount::SavingsAccount()
{
    //ctor
}

SavingsAccount::~SavingsAccount()
{
    //dtor
}
void SavingsAccount::setName(const string& s){
    accountName=s;
}
string SavingsAccount:: getName() const{
    return accountName;
}
 void SavingsAccount::setAddress(const string& c){
     address=c;
 }
 string SavingsAccount:: getAddress() const{
     return address;
 }
void SavingsAccount:: setInterest(double d){
    interest=d;
}
double SavingsAccount:: getInterest() const{
    return interest;
}
void SavingsAccount::setBalance(double b){
    balance=b;
    min_balance=balance;
}
double SavingsAccount::getBalance() const{
    return balance;
}
void SavingsAccount:: deposit(double amount){
    if(amount>0){
        balance+=amount;
    }
}
void SavingsAccount::withdraw(double amount){
    if(amount<balance){
        balance-=amount;
    }
}
double SavingsAccount::calculateInterest(int periodInMonths){
    double total_interest= min_balance*periodInMonths*interest/(12*100);
    return total_interest;
}
void SavingsAccount::disburseInterest(double a){
    balance+=a;
    min_balance=balance;
}

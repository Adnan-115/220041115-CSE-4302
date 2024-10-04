#include <iostream>
#include<string>
#include "SavingsAccount.h"
using namespace std;

void EditInformationByKeyboard(SavingsAccount &acc){
    string name,addr;
    double a,b;
    cout<<"Give Account Name:"<<endl;
    getline(cin,name);
    cout<<"Give Account Address:"<<endl;
    getline(cin,addr);
    cout<<"Give Annual Interest:"<<endl;
    cin>>a;
    cout<<"Give Initial Balance:"<<endl;
    cin>>b;
    cin.ignore();
    acc.setName(name);
    acc.setAddress(addr);
    acc.setInterest(a);
    acc.setBalance(b);
}

void generateInformationRandom(SavingsAccount &acc){
    acc.setName("JOHN");
    acc.setAddress("Dhaka");
    acc.setInterest(3.0);
    acc.setBalance(2000);
}
void ShowInterestAll(SavingsAccount ar[], int size) {
    int period;
    cout << "Enter period in months for interest calculation: ";
    cin >> period;
    double inter[size];
    for (int i = 0; i < size; i++) {
        inter[i]=ar[i].calculateInterest(period);
        cout << "Account: " << ar[i].getName() << " Interest: " << inter[i] << endl;
    }

    char confirm;
    cout << "Do you want to disburse the interest? (y/n): ";
    cin >> confirm;
    if (confirm == 'y') {
        for (int i = 0; i < size; i++) {
            ar[i].disburseInterest(inter[i]);
        }
    }
}
void ShowAllAlphabetically(SavingsAccount ar[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (ar[j].getName() > ar[j + 1].getName()) {
                SavingsAccount temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        cout << "Account: " << ar[i].getName() << " Balance: " << ar[i].getBalance() << endl;
    }
}
int main()
{
    SavingsAccount accounts[100];

    for (int i = 0; i < 2; i++) {
        EditInformationByKeyboard(accounts[i]);
    }
    for (int i = 2; i < ACCOUNT_SIZE; i++) {
        generateInformationRandom(accounts[i]);
    }
    ShowInterestAll(accounts, ACCOUNT_SIZE);
    ShowAllAlphabetically(accounts, ACCOUNT_SIZE);
    return 0;
}

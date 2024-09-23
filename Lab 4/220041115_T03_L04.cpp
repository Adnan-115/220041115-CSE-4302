#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    string accountType;
    double currentBalance;
    const double minimumBalance;
    static double totalSourceTaxCollected;
    static int totalAccountsCreated;
    static int activeAccounts;

public:
    BankAccount(int accNum, string name, string type, double initialBalance, double minBalance): accountNumber(accNum), accountHolderName(name), accountType(type), currentBalance(initialBalance), minimumBalance(minBalance) {
        totalAccountsCreated++;
        activeAccounts++;
    }
    string getAccountHolderName() const{
        return accountHolderName;
    }

    double getCurrentBalance() const{
        return currentBalance;
    }
    void showInfo(){
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Current Balance: " << currentBalance << endl;
        cout << "Minimum Balance: " << minimumBalance << endl;
    }

    void showBalance(){
        cout << "Current Balance: " << currentBalance << endl;
    }
    void deposit(double amount) {
        if (amount <= 0) {
            cout << "Invalid amount." << endl;
            return;
        }
        currentBalance += amount;
    }
    void withdrawal(double amount) {
        if (amount <= 0) {
            cout << "Invalid amount." << endl;
            return;
        }
        if (currentBalance - amount < minimumBalance) {
            cout << "Insufficient balance." << endl;
            return;
        }
        currentBalance -= amount;
    }
    void giveInterest(double interestRate = 3.0) {
        double sourceTax = 0.10*0.03*currentBalance;
        totalSourceTaxCollected += sourceTax; // Add to total collected tax
        currentBalance = currentBalance*1.03-sourceTax;
    }
    static int getTotalAccountsCreated() {
        return totalAccountsCreated;
    }

    static int getActiveAccounts() {
        return activeAccounts;
    }

    static double getTotalSourceTaxCollected() {
        return totalSourceTaxCollected;
    }
    ~BankAccount() {
        cout << "Account of Mr./Ms. " <<accountHolderName<< " with account no "<<accountNumber<<" is destroyed with a balance BDT "<<currentBalance<<endl;
        activeAccounts--;
    }
};
double BankAccount::totalSourceTaxCollected = 0.0;
int BankAccount::totalAccountsCreated = 0;
int BankAccount::activeAccounts = 0;
BankAccount Larger(const BankAccount& A, const BankAccount& B) {
    if (A.getCurrentBalance() > B.getCurrentBalance())
        return A;
    else
        return B;
}
void display_stat() {
    cout << "Total Accounts Created: " << BankAccount::getTotalAccountsCreated() << endl;
    cout << "Active Accounts: " << BankAccount::getActiveAccounts() << endl;
    cout << "Total Source Tax Collected: " << BankAccount::getTotalSourceTaxCollected() << endl;
}

int main() {
    BankAccount acc1(1001, "Alice", "savings", 5000, 1000);
    BankAccount acc2(1002, "Bob", "current", 3000, 1500);
    acc1.showInfo();
    acc2.showInfo();
    acc1.deposit(2000);
    acc1.withdrawal(1000);
    acc1.giveInterest();
    acc2.deposit(500);
    acc2.withdrawal(4000);
    BankAccount largerAcc = Larger(acc1, acc2);
    cout << "Larger account holder: " << largerAcc.getAccountHolderName()
         << " with balance: " << largerAcc.getCurrentBalance() << endl;

    display_stat();
    return 0;
}

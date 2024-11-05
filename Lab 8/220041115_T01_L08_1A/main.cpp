#include <iostream>
#include "Account.h"
#include "CurrentAccount.h"
#include "SavingsAccount.h"
#include "MonthlyDepositedScheme.h"
#include "LoanAccount.h"
#include "TwoYearMDS.h"
#include "FiveYearMDS.h"
#include "InitialDepositMDS.h"
using namespace std;


int main()
{
    cout << "Hello world!" << endl;
    CurrentAccount c1,c2;
    SavingsAccount s1,s2;
    MonthlyDepositedScheme m1,m2,m3;
    LoanAccount l1,l2,l3,l4;
    cout<<c1.getaccountNo()<<endl;
   cout<<c2.getaccountNo()<<endl;
   c2.description();
    cout<<s1.getaccountNo()<<endl;
   cout<<s2.getaccountNo()<<endl;
    s1.description();
      cout<<m1.getaccountNo()<<endl;
         cout<<m2.getaccountNo()<<endl;
            cout<<m3.getaccountNo()<<endl;
            m3.description();
           cout<<l1.getaccountNo()<<endl;
              cout<<l2.getaccountNo()<<endl;
                 cout<<l3.getaccountNo()<<endl;
                    cout<<l4.getaccountNo()<<endl;
                    l4.description();


    return 0;
}

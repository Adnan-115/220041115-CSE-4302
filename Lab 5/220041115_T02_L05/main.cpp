#include <iostream>
#include "Employee.h"
using namespace std;


int main()
{
    Employee e1,e2,e3;
    e1.setInfo();
    e1.getInfo();
    e2.getInfo();
    e3=e1.compareAge(e1,e2);
    cout<<"Older Employee is "<<e3.getName();
    return 0;
}

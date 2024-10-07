#include <iostream>
#include "Counter.h"

using namespace std;

int main()
{
    Counter c1,c2,c3;
    c1.setIncrementStep(3);
    c2.setIncrementStep(3);
    c1.increment();
    c2.increment();
    c1.increment();
    c3=c1+c2;
    cout<<c3.getCount();
    return 0;
}

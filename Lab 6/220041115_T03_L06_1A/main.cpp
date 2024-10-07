#include <iostream>
#include "Celsius.h"
#include "Kelvin.h"
#include "Fahrenheit.h"
using namespace std;

int main()
{
        Celsius tempC(25.0);
        tempC.display();
        Fahrenheit tempF = tempC;
        tempF.display();
        Kelvin tempK = tempC;
        tempK.display();
    return 0;
}

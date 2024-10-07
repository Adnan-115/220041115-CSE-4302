#include "Kelvin.h"
#include "Celsius.h"
#include "Fahrenheit.h"
#include<iostream>

using namespace std;

Kelvin::Kelvin():temp(0)
{
    //ctor
}

Kelvin::~Kelvin()
{
    //dtor
}
Kelvin :: Kelvin(float t): temp(t)
{

}
void Kelvin:: assign(float t){
    if(t>0)
        temp=t;
    else
        temp=0;
}
void Kelvin:: display(){
    cout<<"Current Temp is "<<temp<<" Degree Kelvin"<<endl;
}
Kelvin::operator Celsius() const {
    return Celsius(temp - 273.15);
}

Kelvin::operator Fahrenheit() const {
    return Fahrenheit((temp - 273.15) * 9 / 5 + 32);
}

#include "Fahrenheit.h"
#include "Celsius.h"
#include "Kelvin.h"
#include<iostream>

using namespace std;

Fahrenheit::Fahrenheit(): temp(0)
{
    //ctor
}

Fahrenheit::~Fahrenheit()
{
    //dtor
}
Fahrenheit:: Fahrenheit(float t):temp(t)
{

}
void Fahrenheit:: assign(float t){
    if(t>-459.67){
        temp=t;
    }
    else
        temp=0;
}
void Fahrenheit:: display(){
    cout<<"Current Temperature is "<<temp<<" Degree Fahrenheit"<<endl;
}
Fahrenheit::operator Celsius() const {
    return Celsius((temp - 32) * 5 / 9);
}

Fahrenheit::operator Kelvin() const {
    return Kelvin((temp - 32) * 5 / 9 + 273.15);
}

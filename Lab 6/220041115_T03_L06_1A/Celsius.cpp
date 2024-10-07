#include "Celsius.h"
#include "Fahrenheit.h"
#include "Kelvin.h"
#include<iostream>

using namespace std;
Celsius::Celsius(): temp(0)
{
    //ctor
}

Celsius::~Celsius()
{
    //dtor
}
Celsius:: Celsius(float t): temp(t)
{

}
void Celsius:: assign(float t){
    if(t>-273){
        temp=t;
    }
    else{
        temp=0;
    }
}
void Celsius:: display(){
    cout<<"Temperature is: "<<temp<<" Degree Celsius"<<endl;
}
Celsius::operator Fahrenheit() const {
    return Fahrenheit(temp* 9 / 5 + 32);
}

Celsius::operator Kelvin() const {
    return Kelvin(temp + 273.15);
}

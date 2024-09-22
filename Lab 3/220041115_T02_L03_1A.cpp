#include <iostream>
#include <string>
using namespace std;

class Temperature{
private:
    float value;
    string unit;
    const float ABSOLUTE_ZERO_K = 0.0;
    const float ABSOLUTE_ZERO_C = -273.15;
    const float ABSOLUTE_ZERO_F = -459.67;
    bool isAboveAbsoluteZero(float val, string s){
        if (s=="Celsius" && val<ABSOLUTE_ZERO_C)
            return false;
        if (s=="Fahrenheit" && val<ABSOLUTE_ZERO_F)
            return false;
        if (s=="Kelvin" && val<ABSOLUTE_ZERO_K)
            return false;
        return true;
    }

public:
    Temperature(float val,string s){
        assign(val, s);
    }
    void assign(float val,string s) {
        if (s!="Celsius"&& s!= "Fahrenheit"&& s!="Kelvin"){
            cout << "Error: '"<< endl;
            return;
        }

        if (!isAboveAbsoluteZero(val, s)) {
            cout << "Error: Temperature cannot be below absolute zero." << endl;
            return;
        }
        value=val;
        unit=s;
    }
    float convert(string targetUnit){
        if(targetUnit != "Celsius"&&targetUnit!= "Fahrenheit"&&targetUnit != "Kelvin") {
            cout<<"Error"<<endl;
        }
        float tempInCelsius;
        if(unit=="Celsius") {
            tempInCelsius=value;
        }
         else if(unit == "Fahrenheit"){
            tempInCelsius=(value-32)*5/9;
        }
        else{
            tempInCelsius=value-273.15;
        }
        if (targetUnit=="Celsius") {
            return tempInCelsius;
        }
        else if(targetUnit=="Fahrenheit"){
            return tempInCelsius * 9 / 5 + 32;
        }
        else {
            return tempInCelsius + 273.15;
        }
    }
    void print(){
        cout <<"The temperature is "<<value<<" "<< unit<< "."<< endl;
    }
};

int main() {
    // Example usage
    Temperature temp(25.0, "Celsius");
    temp.print();

    float convertedTemp = temp.convert("Fahrenheit");
    cout << "Converted temperature: " << convertedTemp << " Fahrenheit" << endl;

    temp.assign(-300, "Celsius");

    return 0;
}

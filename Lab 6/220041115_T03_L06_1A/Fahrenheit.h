#ifndef FAHRENHEIT_H
#define FAHRENHEIT_H

class Celsius;
class Kelvin;

class Fahrenheit
{
    public:
        Fahrenheit();
        Fahrenheit(float t);
        void assign(float t);
        void display();
        ~Fahrenheit();
        operator Celsius() const;
        operator Kelvin() const;

    private:
        float temp;
};

#endif // FAHRENHEIT_H

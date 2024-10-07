
#ifndef KELVIN_H
#define KELVIN_H

class Celsius;
class Fahrenheit;

class Kelvin
{
    public:
        Kelvin();
        Kelvin(float t);
        void assign(float t);
        void display();
        operator Celsius() const;
        operator Fahrenheit() const;
        ~Kelvin();

    private:
        float temp;

};

#endif // KELVIN_H

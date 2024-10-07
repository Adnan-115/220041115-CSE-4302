#ifndef CELSIUS_H
#define CELSIUS_H

class Fahrenheit;
class Kelvin;

class Celsius
{
    public:
        Celsius();
        Celsius(float t);
        void assign(float t);
        void display();
        ~Celsius();
        operator Fahrenheit() const;
        operator Kelvin() const;

    private:
        float temp;
};

#endif // CELSIUS_H

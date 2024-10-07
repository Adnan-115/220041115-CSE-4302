#ifndef COORDINATE_H
#define COORDINATE_H


class Coordinate
{
    public:
        Coordinate();
        ~Coordinate();
        Coordinate(int a, int b);
        void display()const;
        float operator - (Coordinate c);
        float getDistance()const;
        void move_x(float val);
        void move_y(float val);
        void move(float x_val, float y_val);
        bool operator > (Coordinate& c)const;
        bool operator < (Coordinate& c)const;
        bool operator >= (Coordinate& c)const;
        bool operator <= (Coordinate& c)const;
        bool operator == (Coordinate& c)const;
        bool operator != (Coordinate& c)const;
    private:
        float x;
        float y;
};

#endif // COORDINATE_H

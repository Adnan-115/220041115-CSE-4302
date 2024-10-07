#include "Coordinate.h"
#include <iostream>
#include <math.h>

using namespace std;

Coordinate::Coordinate():x(0),y(0)
{
    //ctor
}

Coordinate::~Coordinate()
{
    //dtor
}

Coordinate:: Coordinate(int a, int b):x(a),y(b)
{

}
void Coordinate:: display()const{
            cout<<"("<<x<<","<<y<<")"<<endl;
        }
float Coordinate:: operator -(Coordinate c){
    float d= sqrt((x - c.x)*(x- c.x) + (y-c.y)*(y-c.y));
    return d;
}
float Coordinate:: getDistance()const {
    float d = sqrt((x * x)+(y * y));
    return d;
}
void Coordinate:: move_x(float val){
    x = x+val;
}
void Coordinate:: move_y(float val){
    y= y+val;
}
void Coordinate:: move(float x_val, float y_val){
    x= x+x_val;
    y= y+y_val;
}
bool Coordinate:: operator > (Coordinate& c)const {
    if(this->getDistance()>c.getDistance()){
        return 1;
    }
    else{
        return 0;
    }
}
bool Coordinate::operator < (Coordinate& c)const {
    if(this->getDistance()<c.getDistance()){
        return 1;
    }
    else{
        return 0;
    }
}
bool Coordinate:: operator >= (Coordinate& c)const {
    if(this->getDistance()>=c.getDistance()){
        return 1;
    }
    else{
        return 0;
    }
}
bool Coordinate:: operator <= (Coordinate& c)const {
    if(this->getDistance()<=c.getDistance()){
        return 1;
    }
    else{
        return 0;
    }
}
bool Coordinate:: operator == (Coordinate& c)const {
    if(this->getDistance()==c.getDistance()){
        return 1;
    }
    else{
        return 0;
    }
}
bool Coordinate::operator != (Coordinate& c)const {
    if(this->getDistance()!=c.getDistance()){
        return 1;
    }
    else{
        return 0;
    }
}

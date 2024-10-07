#include "Counter.h"
#include<iostream>
using namespace std;

Counter::Counter():count(0),increment_step(1)
{
    //ctor
}
Counter::~Counter()
{
    //dtor
}

void Counter::setIncrementStep(int step_val){
        if (count == 0){
            if (step_val>0){
                increment_step = step_val;
            }
            else {
                cout << "Error " <<  endl;
            }
        }
        else {
            cout << "Error" << endl;
        }
}
int Counter::getCount(){
    return count;
}
void Counter::increment(){
    count=count+increment_step;
}
void Counter::resetCount(int step=1){
    count=0;
    if(step>1){
        increment_step=step;
    }
    else
        increment_step=1;
}
Counter Counter:: operator+(const Counter& other)const{
        if (this->increment_step == other.increment_step){
            Counter result;
            result.count = this->count + other.count;
            result.increment_step = this->increment_step;
            return result;
        }
        else{
            cout << "Cant add" << endl;
            return Counter();
        }
    }
bool Counter:: operator==(const Counter& other) const{
        if(this->count == other.count){
            return 1;
        }
        else{
            return 0;
        }
    }
bool Counter:: operator!=(const Counter& other) const{
        if(this->count != other.count){
            return 1;
        }
        else{
            return 0;
        }
    }
bool Counter:: operator<=(const Counter& other) const{
        if(this->count <= other.count){
            return 1;
        }
        else{
            return 0;
        }
    }
bool Counter:: operator>=(const Counter& other) const{
        if(this->count >= other.count){
            return 1;
        }
        else{
            return 0;
        }
    }
bool Counter:: operator>(const Counter& other) const{
        if(this->count > other.count){
            return 1;
        }
        else{
            return 0;
        }
    }
bool Counter:: operator<(const Counter& other) const{
        if(this->count < other.count){
            return 1;
        }
        else{
            return 0;
        }
    }
Counter& Counter:: operator+=(const Counter& other) {
        this->count += other.count;
        return *this;
    }
Counter& Counter:: operator ++(){
    increment();
    return *this;
}
Counter Counter:: operator++(int){
        Counter temp =*this;
        increment();
        return temp;
    }


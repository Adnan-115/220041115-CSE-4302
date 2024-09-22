#include <iostream>
#include <string>

using namespace std;

class Time{
private:
    int hour=0;
    int minute=0;
    int second=0;

    void normalizeTime(){
        if(second>=60){
            minute+=second/60;
            second=second%60;
        }
        if(minute>=60){
            hour+=minute/60;
            minute=minute%60;
        }
        if(hour>=24){
            hour=hour%24;
        }
    }
    string formatTwoDigit(int value){
        if(value < 10){
            return "0"+to_string(value);
        }
         else{
            return to_string(value);
        }
    }

public:
    int hours(){
        return hour;
    }
    int minutes(){
        return minute;
    }
    int seconds(){
        return second;
    }
    void reset(int h,int m,int s) {
        hour=h;
        minute=m;
        second=s;
        normalizeTime();
    }
    void advance(int h,int m,int s) {
        hour+=h;
        minute+=m;
        second+=s;
        normalizeTime();
    }
    void print(){
        cout<<formatTwoDigit(hour)<<":"<<formatTwoDigit(minute)<<":"<<formatTwoDigit(second)<<endl;
    }
};

int main(){
    Time t1;
    t1.print();
    t1.reset(23,59,50);
    t1.print();
    t1.advance(0,0,15);
    t1.print();
    t1.advance(1,120,70);
    t1.print();

    return 0;
}

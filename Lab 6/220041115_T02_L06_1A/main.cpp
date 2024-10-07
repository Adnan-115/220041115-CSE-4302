#include <iostream>
#include "Coordinate.h"
#include<ctime>

using namespace std;

void randomAssignment(Coordinate c[], int size){
    srand(time(NULL));
    for(int i=0;i<size;i++){
        float a = static_cast<float>(rand())*99/100;
        float b = static_cast<float>(rand())*99/100;
        c[i]=Coordinate(a,b);
    }
}

void sort(Coordinate c[],int size){
    for (int i=0; i<size -1; i++) {
        for (int j=i+1;j<size; j++) {
            if (c[i] > c[j]) {
                swap(c[i], c[j]);
            }
        }
    }
}
void highest(Coordinate c[], int size){
    sort(c,10);
    cout<<"Highest:";
    c[size-1].display();
}
void lowest(Coordinate c[],int size){
    sort(c,10);
    cout<<"Lowest:";
    c[0].display();
}
int main()
{
    Coordinate cord[10];
    randomAssignment(cord,10);
    for(int i=0;i<10;i++){
        cord[i].display();
    }
    highest(cord,10);
    lowest(cord,10);


    return 0;
}

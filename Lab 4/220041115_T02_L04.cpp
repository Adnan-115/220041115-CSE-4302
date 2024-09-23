#include <iostream>

using namespace std;

class Plane{
private:
    int number;
    string destination;
    float distance;
    float max_fuel;
    double Calfuel(){
        double fuel;
        if(distance<=1000){
            fuel=500;
        }
        else if(distance>1000 && distance<=2000){
            fuel=1100;
        }
        else if(distance>2000){
            fuel=2200;
        }
        return fuel;
    }

public:
    void feedinfo(){
        int id;
        string s;
        float d,m;
        cout<<"Enter Flight number:"<<endl;
        cin>>id;
        cin.ignore();
        cout<<"Enter Destination:" <<endl;
        getline(cin,s);
        cout<<"Enter Distance:"<<endl;
        cin>>d;
        cout<<"Enter Max Fuel Capacity:"<<endl;
        cin>>m;
        number=id;
        destination= s;
        distance= d;
        max_fuel=m;
    }
    void showinfo(){
        cout<<"Flight Number: "<<number<<endl;
        cout<<"Flight Destination: "<<destination<<endl;
        cout<<"Flight Distance: "<<distance<<endl;
        cout<<"Maximum Fuel Capacity: "<<max_fuel<<endl;
        double fuel=Calfuel();
        if(max_fuel>=fuel){
            cout<<"There is sufficient Fuel for the journey"<<endl;
        }
        else{
            cout<<"There is not enough fuel for the journey"<<endl;
        }
    }

};

int main()
{
    Plane p1;
    p1.feedinfo();
    p1.showinfo();

    return 0;
}

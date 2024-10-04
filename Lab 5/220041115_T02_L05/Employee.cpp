#include "Employee.h"
#include<iostream>
#include<string>
Employee::Employee(): name("John Doe"), day(1),month(1),year(2002), salary(10000)
{
}

Employee::~Employee()
{
}

string Employee::getName()const {
        return name;
    }
void Employee::setName(const string& newName){
        if(newName.length() > 2) {
            name = newName;
        }
         else {
            name = "John Doe";
        }
    }
double Employee::getSalary() const {
        return salary;
    }

void Employee:: setSalary(double newSalary) {
        if (newSalary >= 10000 && newSalary <= 100000) {
            salary = newSalary;
        }
         else {
            salary = 10000;
        }
    }
void Employee:: setDateOfBirth(int a,int b, int c){
    if(c<2006){
        day=a;
        month=b;
        year=c;
    }

}
string Employee:: getDateofBirth(){
    string s,d,m,y;
    d=to_string(day);
    m=to_string(month);
    y=to_string(year);
    s=d+"/"+m+"/"+y;
    return s;
}
void Employee::setInfo() {
        string newName;
        int d,m,y;
        double newSalary;
        cout<<"Enter Name"<<endl;
        getline(cin,newName);
        cout<<"Enter Date Of Birth: (d/m/y)"<<endl;
        scanf("%d/%d/%d",&d,&m,&y);;
        cout<<"Enter Salary:"<<endl;
        cin>>newSalary;
        setName(newName);
        setDateOfBirth(d, m, y);
        setSalary(newSalary);
    }
void Employee:: getInfo() {
        cout << "Name: " << getName() << endl;
        string s= getDateofBirth();
        cout << "Date of Birth: " << s<<endl;
        cout << "Salary: BDT " << getSalary() << endl;
    }
Employee Employee:: compareAge(Employee a, Employee b)const{
    if(a.year<b.year){
        return a;
    }
    else if(a.year>b.year){
        return b;
    }
    else{
        if(a.month<b.month){
            return a;
        }
        else if(a.month>b.month){
            return b;
        }
        else{
            if(a.day<b.day){
                return a;
            }
            else{
                return b;
            }
        }
    }
}

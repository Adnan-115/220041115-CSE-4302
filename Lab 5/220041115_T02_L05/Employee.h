#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
#include<string>
using namespace std;

class Employee
{   private:
        string name;
        int year;
        int month;
        int day;
        double salary;


    public:
        Employee();
        void setName(const string& newName);
        string getName()const;
        double getSalary() const;
        void  setSalary(double newSalary);
        void  setDateOfBirth(int a,int b, int c);
        string getDateofBirth();
        void setInfo();
        void  getInfo();
        Employee  compareAge(Employee a, Employee b) const;
        ~Employee();
};

#endif // EMPLOYEE_H

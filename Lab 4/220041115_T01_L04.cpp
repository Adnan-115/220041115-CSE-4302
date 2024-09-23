#include <iostream>

using namespace std;

class Calculator{
private:
    int number;
    int getnumber(){
        return number;
    }
    int setnumber(int n){
        number=n;
    }
public:
    Calculator(){
        number=0;
    }
    Calculator(int value){
        number=value;
    }
    void add(int value){
        number+=value;
    }
    void subtract(int value){
        number-=value;
    }
    void multiply(int value){
        number*=value;
    }
    int divideBy(int value){
        int rem;
        if(value==0){
            cout<<"ERROR"<<endl;
        }
        else{
            rem=number%value;
            number=number/value;
            return rem;
        }
    }
    void clear(){
        number=0;
    }
    void display(){
        cout<<"Calculator Display: "<<number<<endl;
    }
    ~Calculator() {
        cout << "Calculator display: " <<number<< endl;
        cout << "Destructor of the Calculator object is called." << endl;
    }
};

int main()
{   Calculator calc;
    calc.add(10);
    calc.display();
    calc.add(7);
    calc.display();
    calc.multiply(31);
    calc.display();
    calc.subtract(42);
    calc.display();
    calc.divideBy(7);
    calc.display();
    calc.divideBy(0);
    calc.display();
    calc.add(3);
    calc.display();
    calc.clear();
    calc.display();

    return 0;
}

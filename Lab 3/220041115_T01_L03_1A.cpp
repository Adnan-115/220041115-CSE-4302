#include <iostream>
using namespace std;

class Counter {
private:
    int count = 0;
    int incrementStep = 1;

public:
    void setIncrementStep(int step){
        incrementStep = step;
    }
    int getCount(){
        return count;
    }
    void increment(){
        count += incrementStep;
    }
    void resetCount() {
        count = 0;
    }
};

int main() {
    Counter counter;
    counter.setIncrementStep(3);
    counter.increment();
    cout<<"Count after increment: "<<counter.getCount()<<endl;
    counter.increment();
    cout<<"Count after increment: "<<counter.getCount()<<endl;
    counter.resetCount();
    cout <<"Count after reset: "<<counter.getCount()<< endl;

    return 0;
}

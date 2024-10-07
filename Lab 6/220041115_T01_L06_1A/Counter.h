#ifndef COUNTER_H
#define COUNTER_H


class Counter
{
    public:
        Counter();
        ~Counter();
        void setIncrementStep(int step_val);
        int getCount();
        void increment();
        void resetCount(int step);
        Counter operator +(const Counter& other)const;
        bool operator ==(const Counter& other) const;
        bool operator!=(const Counter& other) const;
        bool operator<=(const Counter& other) const;
        bool operator>=(const Counter& other) const;
        bool operator>(const Counter& other) const;
        bool operator<(const Counter& other) const;
        Counter& operator+=(const Counter& other);
        Counter& operator ++();
        Counter operator++(int);
    private:
        int count;
        int increment_step;
};

#endif // COUNTER_H

#include <iostream>
using namespace std;


class Time
{
private:
    int hour, minute, second;

public:
    Time()
    {
        hour = 0;
        minute = 0; // Default Constructor
        second = 0;
    }
    Time(int hour, int minute, int second)
    {
        this->hour = hour;
        this->minute = minute; //  Parameterised Constructor
        this->second = second;
    }
    Time operator+(Time t2)
    {
        Time temp;
        temp.second = this->second + t2.second; // Addition t3 = t1+t2
        temp.minute = temp.second / 60;
        temp.second = temp.second % 60;
        temp.minute = temp.minute + this->minute + t2.minute;
        temp.hour = temp.minute / 60;
        temp.minute = temp.minute % 60;
        temp.hour = temp.hour + this->hour + t2.hour;
        return temp;
    }
    void operator++()
    {
        hour++;
        minute++;
        second++;
    }
    void operator++(int)
    {
        hour++;
        minute++;
        second++;
    }
    void display()
    {
        cout << "Hour = " << hour << endl;     // Printing Hour
        cout << "Minute = " << minute << endl; // Printing Minute
        cout << "Second = " << second << endl; // Printing Second
    }
   friend void operator<<(ostream &, Time&);
};
void operator<<(ostream &o, Time &k)
{

    cout<<"This function called"<<endl;
    o<<k.hour;
    cout<<k.minute;
    cout<<k.second;
}

int main()
{
    // Time t1(10, 41, 39);
    // Time t2(10, 20, 30);
    // Time t3;
    // t3 = t1 + t2; // t3=t1.operator(t2)
    // t3.display();
    Time t1(1,2,3);
    ++t1;     //t1.operator++();
    t1++;   //t1.operator++();
   // t1.operator++();
   // t1.display();
   cout<<t1;
}


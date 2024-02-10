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
        minute = 0;
        second = 0;
    }
    Time(int hour, int minute, int second)
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    Time operator+(Time &t2)
    {
        Time temp;
        temp.hour = hour + t2.hour;
        temp.minute = minute + t2.minute;
        temp.second = second + t2.second;
        return temp;
    }
    void operator++()
    {
        hour++;
        minute++;
        second++;
    }
    void display()
    {
        cout << "Hour = " << hour << endl;
        cout << "Minute = " << minute << endl;
        cout << "Second = " << second << endl;
    }
};
int main()
{
    Time t1(1, 1, 1);
    Time t2(2, 2, 2);
    Time t3;
    t3 = t1 + t2;
    ++t3;
    t3.display();
}
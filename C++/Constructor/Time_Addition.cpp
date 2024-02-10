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
    void addTime(Time t1, Time t2)
    {
        this->second = t1.second + t2.second;
        this->minute = second / 60;
        this->second = second % 60;
        this->minute = minute + t1.minute + t2.minute;
        this->hour = minute / 60;
        this->minute = minute % 60;
        this->hour = hour + t1.hour + t2.hour;
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
    Time t1(10, 20, 29);
    Time t2(10, 20, 30);
    Time t3;
    t3.addTime(t1, t2);
    t3.display();
}

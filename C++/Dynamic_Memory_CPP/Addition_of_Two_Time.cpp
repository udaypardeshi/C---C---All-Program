#include <iostream>
using namespace std;
class Time
{
private:
    int *hour, *minute, *second;

public:
    Time()
    {
        hour = new int(0);
        minute = new int(0);
        second = new int(0);
    }

    Time(int hour, int minute, int second)
    {
        this->hour = new int(hour);
        this->minute = new int(minute);
        this->second = new int(second);
    }
    
    void addTime(Time t1,Time t2)
    {
        *(this->second) = *(t1.second) + *(t2.second);
        *(this->minute) = *(second) / 60;
        *(this->second) = *(second) % 60;
        *(this->minute) = *(minute) + *(t1.minute) + *(t2.minute);
        *(this->hour) = *(minute) / 60;
        *(this->minute) = *(minute) % 60;
        *(this->hour) = *(hour) + *(t1.hour) + *(t2.hour);
    }
    void display()
    {
        cout << "\nHour = " << *hour << endl;
        cout << "Minute = " << *minute << endl;
        cout << "Second = " << *second << endl;
    }
    ~Time()
    {
        delete hour;
        delete minute;
        delete second;
    }
};
int main()
{
    Time t1(10, 20, 125);
    Time t2(10, 50, 30);
    Time t3;
    t3.addTime(t1, t2);
    t3.display();
}
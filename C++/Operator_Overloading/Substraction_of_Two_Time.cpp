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
    Time operator-(Time t2)
    {
        Time temp;
        temp.second = this->second - t2.second; // Addition t3 = t1+t2
        temp.minute = this->minute - t2.minute;
        temp.hour = this->hour - t2.hour;
        temp.minute = temp.second / 60;
        temp.second = temp.second % 60;
        temp.minute = temp.minute + this->minute - t2.minute;
        temp.hour = temp.minute / 60;
        temp.minute = temp.minute % 60;
        temp.hour = temp.hour + this->hour - t2.hour;
        return temp;
    }
    void display()
    {
        cout << "Hour = " << hour << endl;     // Printing Hour
        cout << "Minute = " << minute << endl; // Printing Minute
        cout << "Second = " << second << endl; // Printing Second
    }
};
int main()
{
    Time t1(4, 7, 30);
    Time t2(2, 26, 50);
    Time t3;
    t3 = t1 - t2; // t3=t1.operator(t2)
    t3.display();
}

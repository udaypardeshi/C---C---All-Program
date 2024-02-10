// #include <iostream>
// #include <string.h>
// using namespace std;
// class Time
// {
// private:
//     int hour, minute, second;

// public:
//     Time()
//     {
//         hour = 0;
//         minute = 0;
//         second = 0;
//     }
//     Time(int hour, int minute, int second)
//     {
//         this->hour = hour;
//         this->minute = minute;
//         this->second = second;
//     }
//     Time operator+(Time t2)
//     {
//         Time temp;
//         temp.hour = hour + t2.hour;
//         temp.minute = minute + t2.minute;
//         temp.second = second + t2.second;
//         return temp;
//     }
//     void operator++(int)
//     {
//         hour++;
//         minute++;
//         second++;
//     }
//     void operator++()
//     {
//         hour++;
//         minute++;
//         second++;
//     }
//     Time display()
//     {
//         cout << "Hour = " << hour << endl;
//         cout << "Minute = " << minute << endl;
//         cout << "Second = " << second << endl;
//     }
//  friend void operator<<(ostream &, Time&);
// };
// void operator<<(ostream &o, Time &k)
// {

//     cout<<"This function called"<<endl;
//     o<<k.hour;
//     cout<<k.minute;
//     cout<<k.second;
// }
// int main()
// {
//     Time t1(1, 1, 1);
//     ++t1;
//     t1++;
//     // t1++;
//     // Time t2(2,2,2);
//     // Time t3;
//     // t3=t1+t2;
//     // t3.display();
//     cout<<t1;
// }

// #include <iostream>
// using namespace std;
// class Time
// {
//     private:
//     int hour, minute, second;
//     public:
//     Time ()
//     {
//         hour=0;
//         minute=0;
//         second=0;
//     }
//     Time(int hour, int minute, int second)
//     {
//         this->hour=hour;
//         this->minute=minute;
//         this->second=second;
//     }
//     Time operator+(Time &t2)
//     {
//         Time temp;
//         temp.hour=hour+t2.hour;
//         temp.minute=minute+t2.minute;
//         temp.second=second+t2.second;
//         return temp;
//     }
//     void operator++(int)
//     {
//         hour++;
//         minute++;
//         second++;
//     }
//     void operator++()
//     {
//         hour++;
//         minute++;
//         second++;
//     }
//     void display()
//     {
//         cout<<"Hour = "<<hour<<endl;
//         cout<<"Minute = "<<minute<<endl;
//         cout<<"Second = "<<second<<endl;
//     }
//     friend void operator<<(ostream &, Time &);
// };
// // void operator<<(ostream &o, Time &k)
// // {
// //     cout<<"This function called"<<endl;
// //     o<<k.hour;
// //     cout<<k.minute;
// //     cout<<k.second;
// // }
// void operator<<(ostream &o, Time &t)
// {
//     o<<t.hour;
//     o<<t.minute;
//     o<<t.second;
// }
// int main()
// {
//     Time t1(1,1,1);
//     Time t2(2,2,2);
//     Time t3;
//     t3=t1+t2;
//     t3.display();
//     t1++;
//     t1.display();
//     t2++;

//     // ++t1;
//     // cout<<t1;
// }


#include <iostream>
using namespace std;
class Time
{
    private:
    int hour, minute, second;
    public:
    Time()
    {
        hour=0;
        minute=0;
        second=0;
    }
    Time(int hour, int minute, int second)
    {
        this->hour=hour;
        this->minute=minute;
        this->second=second;
    }
    Time operator+(Time &t2)
    {
        Time temp;
        temp.hour=hour+t2.hour;
        temp.minute=minute+t2.minute;
        temp.second=second+t2.second;
        return temp;
    }
     void operator++(int)
    {
        hour++;
        minute++;
        second++;
    }
    void display()
    {
        cout<<"Hour = "<<hour<<endl;
        cout<<"Minute = "<<minute<<endl;
        cout<<"Second = "<<second<<endl;
    }
    // Time operator++(int)
    // {
    //     hour++;
    //     minute++;
    //     second++;
    // }
};
int main()
{
    Time t1(1,1,1);
    Time t2(1,1,1);
    Time t3;
    // t3=t1+t2;
    t1++;
    t1.display();
    return 0;
}

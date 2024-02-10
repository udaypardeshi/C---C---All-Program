#include <iostream>
using namespace std;
class Base
{
public:
   virtual void display()
    {
        cout << "Base";
    }
};
class Derived : public Base
{
public:
    void display()
    {
        cout << "Derived";
    }
};
int main()
{
    Base *ptr;
    Derived obj;
    ptr = &obj;
    ptr->display();
}



// #include <iostream>
// using namespace std;
// class Base
// {
// public:
//     void display()
//     {
//         cout << "Base";
//     }
// };
// class Derived : public Base
// {
// public:
//     void display()
//     {
//         cout << "Derived";
//     }
// };
// int main()
// {
//     Base *ptr;
//     Derived obj;
//     ptr = &obj;
//     ptr->display();
// }


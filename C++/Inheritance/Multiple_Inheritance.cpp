#include <iostream>
#include <string.h>
using namespace std;
class A
{
protected:
    int a;

public:
    A()
    {
        a = 0;
    }
    A(int a)
    {
        this->a = a;
    }
    void displayA()
    {
        cout << "A = " << a << endl;
    }
};
class B
{
protected:
    int b;

public:
    B()
    {
        b = 0;
    }
    B(int b)
    {
        this->b = b;
    }
    void displayB()
    {
        cout << "B = " << b << endl;
    }
};
class C : public A, public B
{
    int c;

public:
    C()
    {
        c = 0;
    }
    C(int a, int b, int c) : A(a), B(b)
    {
        this->c = c;
    }
    void displayC()
    {
        displayA();
        displayB();
        cout << "C = " << c << endl;
    }
};
int main()
{
    C c;
    c.displayC();
    C c1(10, 20, 30);
    c1.displayC();
}
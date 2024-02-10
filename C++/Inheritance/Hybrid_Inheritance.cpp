/*#include<iostream>
using namespace std; 
#include<string.h>
class A
{
    protected:
    int a;
    public:
    A()
    {
        a=0;
    }
    A(int a)
    {
        this->a=a;
    }
    void displayA()
    {
        cout<<"a: "<<a<<endl;
    }
};
class B:virtual public A
{
    protected:
    int b;
    public:
    B()
    {
        b=0;
    }
    B(int a,int b):A(a)
    {
        this->b=b;
    }
    B(int b)
    {
        this->b=b;
    }
    void displayB()
    {
        A::displayA();
        cout<<"b: "<<b<<endl;
    }
};
class C:virtual public A
{
    protected:
    int c;
    public:
    C()
    {
        c=0;
    }
    C(int a,int b,int c):A(a)
    {
        this->c=c;
    }
    C(int c)
    {
        this->c=c;
    }
    void displayC()
    {
        A::displayA();
        cout<<"c: "<<c<<endl;
    }
};
class D:public B,public C      //public A,public B,public C (For compiler)
{
    protected:
    int d;
    public:
    D()
    {
        d=0;
    }
    D(int a,int b,int c,int d):B(b),C(c)    //A(a),B(b),C(c)   (For compiler)
    {
        this->d=d;
    }
    void displayD()
    {
        A::displayA();
        B::displayB();
        C::displayC();
        cout<<"d: "<<d<<endl;
    }
};
int main()
{
    D obj;
    obj.displayD();
}*/



#include <iostream>
using namespace std;
class A
{
 protected:
 int a;
public:
A()
{
    a=0;
}
A(int a)
{
    this->a=a;
}
void displayA()
{
    cout<<"A = "<<a<<endl;
}
};
class B: virtual public A
{
    protected:
    int b;
    public:
    B()
    {
        b=0;
    }
    B(int a, int b): A(a)
    {
       this->b=b;
    }
    void displayB()
    {
        A:displayA();
        cout<<"B = "<<b<<endl;
    }
};
class C : virtual public A
{
    protected:
    int c;
    public:
    C()
    {
        c=0;
    }
    C(int a, int c):A(a)
    {
        this->c=c;
    }
    void displayC()
    {
        A::displayA();
        cout<<"C = "<<c<<endl;
    }
};
class D :  public B,  public C
{
    private:
    int d;
    public:
    D()
    {
        d=0;
    }
    D(int a, int b, int c, int d):A(a),B(a,b), C(a,c)
    {
        this->d=d;
    }
    void displayD()
    {
        A::displayA();
        B::displayB();
        C::displayC();
        cout<<"D = "<<d<<endl;
    }
};
int main()
{
    D obj;
    obj.displayD();
    D obj1(10,20,30,40);
    obj1.displayD();
}
#include <iostream>
using namespace std;
class Base
{
    public:
   virtual void display()
{
    cout<<"Base"<<endl;
}
void BaseFun()
{
    cout<<"Base Function"<<endl;
}
};
class Derived:public Base
{
    public:
    void display()
    {
        cout<<"Derived"<<endl;
    }
    void DerivedFun()
    {
        cout<<"Derived Function"<<endl;
    }
};
int main()
{
    Base *ptr;
    Derived obj;
    ptr=&obj;
    ptr->display();
    ptr->BaseFun();
    // ptr->DerivedFun();   If you added this line compiler will be Error on this line.
}
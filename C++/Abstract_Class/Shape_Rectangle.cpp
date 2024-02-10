#include <iostream>
using namespace std;
class Shape
{
    protected:
    int x, y ;
    public:
    Shape()
    {
        x=0;
        y=0;
    }
    virtual void draw()=0;
};
class Rectangle:public Shape
{
    public:
    Rectangle()
    {

    }
    void draw()
    {
       cout<<"Rectangle";
    }
};
int main()
{
    Shape *ptr;
    Rectangle obj;
    ptr = &obj;
    ptr->draw();
}
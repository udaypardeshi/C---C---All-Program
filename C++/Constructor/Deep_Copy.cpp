#include <iostream>
using namespace std;
class Test
{
private:
    int *ptr;

public:
    Test(int a)
    {
        this->ptr = new int(a);
    }
    Test(Test &t)
    {
        Test *ptr=new Test (10);
        ptr->display();
    }
    void display()
    {
        cout << "Value = " << *ptr << endl;
    }
    ~Test()
    {
        delete ptr;
    }
};
int main()
{
    Test t1(10);
    t1.display();
    {
        Test t2(t1);
        t2.display();
    }
    t1.display();
}


/*#include <iostream>
using namespace std;
class Test
{
private:
    int *ptr;

public:
    Test(int a)
    {
        this->ptr = new int(a);
    }
    Test(Test &t)
    {
        Test *ptr=new Test (10);
        ptr->display();
    }
    void display()
    {
        cout << "Value = " << *ptr << endl;
    }
    ~Test()
    {
        delete ptr;
    }
};
int main()
{
    Test t1(10);
    t1.display();
    {
        Test t2(t1);
        t2.display();
    }
    t1.display();
}*/
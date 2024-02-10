#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
private:
    int *age;
    float *salary;
    char *name;

public:
    Employee()
    {
        age = new int (20);
        salary = new float (50000);
        name = new char[5];
        strcpy(name, "Uday");
    }
    void display()
    {
        cout << "Age = " << *age << endl;
        cout << "Salary = " << *salary << endl;
        cout << "Name = " << name << endl;
    }
};
int main()
{
    Employee e;
    e.display();
}
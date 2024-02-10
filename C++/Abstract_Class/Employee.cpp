#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
    protected:
    int eid;
    char name[50];
    float Basic_Salary;
    public:
    Employee(int eid, char *nm, float Basic_Salary)
    {
      this->eid=eid;
      strcpy(name,nm);
      this->Basic_Salary=Basic_Salary;
    }
    virtual float calculate_Sal(int bonus)=0;
    virtual void display()
    {
        cout<<eid<<name;
    }
};
class Tester:public Employee
{
    protected:
    int bonus;
    public:
    Tester(int eid, char *nm, float Basic_Salary, int bonus):Employee(eid,nm,Basic_Salary)
    {
        this->bonus=bonus;
    }
    float calculate_Sal(int bonus)
    {
        // return Basic_Salary
        10+20+15+bonus;
        return Basic_Salary;
    }
    void display()
    {
        Employee::display();
        cout<<Basic_Salary<<bonus;
    }
};
int main()
{
    Employee *ptr;
    Tester obj(10,"A",2.0,2);
    ptr=&obj;
    // ptr->calculate_Sal();
    ptr->display();
}
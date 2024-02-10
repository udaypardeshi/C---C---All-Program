#include <iostream>
#include <string.h>
using namespace std;
class Person
{
protected:
    int age;
    char name[20];

public:
    Person()
    {
        age = 0;
        strcpy(name, "NA");
    }
    Person(int age, char *name)
    {
        this->age = age;
        strcpy(this->name, name);
    }
    void displayPerson()
    {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
    }
};
class Employee : public Person
{
private:
    int eid;

public:
    Employee()
    {
        eid = 0;
        strcpy(name, "NA");
        age = 0;
    }
    Employee(int eid, char *name, int age)
    {
        this->age = age;
        strcpy(this->name, name);
        this->eid = eid;
    }
    void display()
    {
        displayPerson();
        cout << "Eid = " << eid << endl;
    }
};

int main()
{
    Employee e;
    e.display();
    Employee e1(20, "Uday", 1);
    e1.display();
}
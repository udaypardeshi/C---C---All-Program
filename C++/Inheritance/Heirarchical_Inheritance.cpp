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
        cout << "Age = " << age << endl;
        cout << "Name = " << name << endl;
    }
};
class Student : public Person
{
    int rollno;

public:
    Student()
    {
        rollno = 0;
    }
    Student(int age, char *name, int rollno) : Person(age, name)
    {
        this->rollno = rollno;
    }
    void displayStudent()
    {
        displayPerson();
        cout << "Roll No = " << rollno << endl;
    }
};
class Employee : public Person
{
    int eid;

public:
    Employee()
    {
        eid = 0;
    }
    Employee(int age, char *name, int eid) : Person(age, name)
    {
        this->eid = eid;
    }
    void displayEmployee()
    {
        displayPerson();
        cout << "Eid = " << eid << endl;
    }
};
int main()
{
    //  Person p;
    //  p.displayPerson();
    // Person p1(20,"Uday");
    // p1.displayPerson();

    // Student s;
    // s.displayStudent();
    // Student s1(20,"Uday",1);
    // s1.displayStudent();

    Employee e;
    e.displayEmployee();
    Employee e1(21, "Uday", 101);
    e1.displayEmployee();
}
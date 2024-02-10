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
        age = 0; // Default Constructor
        strcpy(name, "NA");
    }
    Person(int age, char *name)
    {
        this->age = age; // Parameterised Constructor
        strcpy(this->name, name);
    }
    void displayPerson()
    {
        cout << "Age = " << age << endl; // Printing Age & Name
        cout << "Name = " << name << endl;
    }
}; // First Base Class
class Employee : public Person
{
protected:
    int eid;

public:
    Employee()
    {
        eid = 0; // Default Constructor
    }
    Employee(int age, char *name, int eid) : Person(age, name)
    {
        this->eid = eid; // paramrterised Constructo
    }
    void displayEmployee()
    {
        displayPerson();                 // Printing Age ,Name
        cout << "Eid = " << eid << endl; // Printing Eid
    }
}; // Second Base class
class Developer : public Employee
{
private:
    float sal;
    char projectname[20];

public:
    Developer()
    {
        sal = 1000; // Default Constructor
        strcpy(projectname, "dabs");
    }
    Developer(int age, char *name, int eid, float sal, char *projectname) : Employee(age, name, eid)
    {
        this->sal = sal; // Parameterised Constructor
        strcpy(this->projectname, projectname);
    }
    void displayDeveloper()
    {
        displayEmployee();                                // Printing age, name, eid
        cout << "Salary = " << sal << endl;               // Printing Salary
        cout << "Project Name = " << projectname << endl; // Printing Project Name
    }
}; // Derived Class Completed
int main()
{
    Developer d;
    d.displayDeveloper();
    Developer d1(20, "Uday", 101, 50000, "dabs");
    d1.displayDeveloper();
}
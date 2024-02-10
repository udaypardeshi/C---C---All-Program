/*#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
private:
    int age;
    float salary;
    char name[20];

public:
    void setData(int a, float s, char *nm)
    {
        age = a;
        salary = s;
        strcpy(name, nm);
    }
    void display()
    {
        cout << "age = " << age;
        cout << "salary = " << salary;
        cout << "name = " << name;
    }
};
int main()
{
    Employee e;
    int age;
    float sal;
    char name[20];
    cout << "Enter Age = " << endl;
    cin >> age;
    cout << "Enter Salary = " << endl;
    cin >> sal;
    cout << "Enter Name = " << endl;
    cin >> name;
    e.setData(age, sal, name);
    e.display();
}*/


/*#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
private:
    int age;
    float salary;
    char name[20];

public:
    void setData(int age, float salary, char *name)
    {
        this-> age=age; 
        this-> salary=salary ;
        strcpy(this->name, name);
    }
    void display()
    {
        cout << "\nage = " << age;
        cout << "\nsalary = " << salary;
        cout << "\nname = " << name;
    }
};
int main()
{
    Employee e;
    int age;
    float salary;
    char name[20];
    cout << "Enter Age = " << endl;
    cin >> age;
    cout << "Enter Salary = " << endl;
    cin >> salary;
    cout << "Enter Name = " << endl;
    cin >> name;
    e.setData(age, salary, name);
    e.display();
}*/


/*#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
private:
    int age;
    float salary;
    char name[20];

public:
    void setData(int age, float salary, char *name)
    {
        age = age;
        salary = salary;
        strcpy(name, name);
    }
    void display()
    {
        cout << "\nage = " << age;
        cout << "\nsalary = " << salary;
        cout << "\nname = " << name;
    }
};
int main()
{
    Employee e;
    int age;
    float salary;
    char name[20];
    cout << "Enter Age = " << endl;
    cin >> age;
    cout << "Enter Salary = " << endl;
    cin >> salary;
    cout << "Enter Name = " << endl;
    cin >> name;
    e.setData(age, salary, name);
    e.display();
}*/


#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
    int age;
    float salary;
    char name[20];


    void setData(int a, float s, char *nm)
    {
        age = a;
        salary = s;
        strcpy(name, nm);
    }
    void display()
    {
        cout << "age = " << age;
        cout << "salary = " << salary;
        cout << "name = " << name;
    }
};
int main()
{
    Employee e;
    int age;
    float sal;
    char name[20];
    cout << "Enter Age = " << endl;
    cin >> age;
    cout << "Enter Salary = " << endl;
    cin >> sal;
    cout << "Enter Name = " << endl;
    cin >> name;
    e.setData(age, sal, name);
    e.display();
}
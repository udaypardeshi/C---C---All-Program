#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
private:
  int age;
  float salary;
  char name[20];

public:
  Employee(int age, float salary, char *name)
  {
    this->age = age;
    this->salary = salary;
    strcpy(this->name, name);
  }
  void display()
  {
    cout << "Age = " << age;
    cout << "Salary = " << salary;
    cout << "Name = " << name;
  }
};
int main()
{
  Employee e2(20, 2000, "Uday");
  e2.display();
}
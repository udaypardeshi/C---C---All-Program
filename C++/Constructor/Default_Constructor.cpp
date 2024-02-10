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
  Employee()
  {
    age = 0;
    salary = 0;
    strcpy(name , "NA");
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
  Employee e;
  e.display();
}
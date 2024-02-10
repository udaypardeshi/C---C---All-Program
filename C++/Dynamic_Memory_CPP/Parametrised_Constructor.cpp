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
  Employee(int age, float salary, char *name)
  {
    this->age = new int(age);
    this->salary = new float(salary);
    int len = strlen(name);
    this->name = new char[len + 1];
    strcpy(this->name, name);
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
  Employee e(20,20000,"Uday");
  e.display();
}
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
    age = new int(0);
    salary = new float(0);
    name = new char[3];
    strcpy(name, "NA");
  }
  void display()
  {
    cout << " \n Age = " << *age << endl;
    cout << " Salary = " << *salary << endl;
    cout << " Name = " << name << endl;
  }
  Employee(int age, float salary, char *name)
  {
    this->age = new int(age);
    this->salary = new float(salary);
    int len = strlen(name);
    this->name = new char[len + 1];
    strcpy(this->name, name);
  }
   ~Employee()
  {
    delete age;
    delete salary;
    delete[] name;
  }
  void setName(char *name)
  {
    delete[] this->name;
    int len = strlen(name);
    this->name = new char[len + 1];
    strcpy(this->name, name);
  }
  void setAge(int age)
  {
    *(this->age) = age;
  }
  void setSalary(float salary)
  {
    *(this->salary) = salary;
  }
};
int main()
{
  Employee e;
  e.display();

  Employee e1(20, 50000, "Uday");
  e1.display();

//   e.setAge(25);
//   e.setName("ABC");
//   e.setSalary(2000);
//   e.display();
  return 0;
}
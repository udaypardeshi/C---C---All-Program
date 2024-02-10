/*#include <iostream>
using namespace std;

int  main()
{
int age;
float salary;
char name[20];
int employee_ID;

cout<<"Age = "<<endl;
cin>>age;
cout<<"Salary = "<<endl;
cin>>salary;
cout<<"Name = "<<endl;
cin>>name;
cout<<"Employee Id = "<<endl;
cin>>employee_ID;

cout<<"Age = "<<age<<endl;
cout<<"Salary = "<<salary<<endl;
cout<<"Name = "<<name<<endl;
cout<<"Employee ID = "<<employee_ID;
return 0;
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
    this->age=age;
    this->salary=salary;
    strcpy(this->name,name);
  }
  void display()
  {
    cout<<"\nAge = "<<age;
    cout<<"\nSalary = "<<salary;
    cout<<"\nName = "<<name;
  }
};
int main()
{
  Employee e;
  int age;
  float salary;
  char name[20];
  cout<<"Enter Age = "<<endl;
  cin>>age;
  cout<<"Enter Salary = "<<endl;
  cin>>salary;
  cout<<"Enter Name = "<<endl;
  cin>>name;
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
  void setage(int age)
  {
    this->age=age;
  }
  int getAge()
  {
    return age;
  }
  void setsalary(float salary)
  {
     this->salary=salary;
  }
  float getsalary()
  {
    return salary;
  }
  void setname(char *name)
  {
   strcpy(this->name,name);
  }
  char *getname()
  {
    return name;
  }
  void display()
  {
    cout<<"Age = "<<age;
    cout<<"salary = "<<salary;
    cout<<"Name = "<<name;
  }
};
int main()
{
  Employee e;
  e.display();
}*/

/*#include <iostream>
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
}*/

/*#include <iostream>
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
  Employee e(20, 50000, "Uday");
  e.display();
}*/

/*#include <iostream>
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

  e.setAge(25);
  e.setName("ABC");
  e.setSalary(2000);
  e.display();
  return 0;
}*/

/*#include <iostream>
using namespace std;
class Time
{
private:
  int *hour, *minute, *second;

public:
  Time()
  {
    hour = new int(0);
    minute = new int(0);
    second = new int(0);
  }
  Time(int hour, int minute, int second)
  {
    this->hour = new int(hour);
    this->minute = new int(minute);
    this->second = new int(second);
  }
  void addTime(Time t1, Time t2)
  {
    *(this->second) = *(t1.second) + *(t2.second);
    *(this->minute) = *(second) / 60;
    *(this->second) = *(second) % 60;
    *(this->minute) = *(minute) + *(t1.minute) + *(t2.minute);
    *(this->hour) = *(minute) / 60;
    *(this->minute) = *(minute) % 60;
    *(this->hour) = *(hour) + *(t1.hour) + *(t2.hour);
  }
  void display()
  {
    cout << "\nHour = " << *hour << endl;
    cout << "Minute = " << *minute << endl;
    cout << "Second = " << *second << endl;
  }
  ~Time()
  {
    delete hour;
    delete minute;
    delete second;
  }
};
int main()
{
  Time t1(10, 20, 125);
  Time t2(10, 50, 30);
  Time t3;
  t3.addTime(t1, t2);
  t3.display();
}*/

/*#include <iostream>
#include <string.h>
using namespace std;
class Person
{
  private:
  int age;
  char *name;
  public:
  Person(int a,char *name)
  {
    age=0;
    name=new char[3];
    strcpy(this->name,"NA");
  }

  Person(int age,char * name)
  {
    this->age=age;
    int len;
        len=strlen(name);
        delete []this->name;
        this->name=new char(len+1);
        strcpy(this->name,name);

  }
  void display()
  {
    cout<<"Age = "<<age<<endl;
    cout<<"Name = "<<name<<endl;
  }
};
int main()
{
 Person p;
 p.display();
}*/

// #include<iostream>
// using namespace std;
// #include<string.h>
// class Person
// {
//     char *name;
//     int age;
//     public:
//     Person()
//     {
//         name=new char[3];
//         strcpy(name,"NA");
//         age=0;
//     }
//     Person(char *name,int age)
//     {
//         int len;
//         len=strlen(name);
//         delete []this->name;
//         this->name=new char(len+1);
//         strcpy(this->name,name);
//         /*int len=strlen(name);
//         this->name=new char[len+1];
//         strcpy(this->name,name);*/
//         /*int i,flag=1,len;
//         for(i=0;name[i]!='\0';i++)
//         {
//             if(!(name[i]>='a' && name[i]<='z' || name[i]>='A' && name[i]<='Z'))
//             {
//                 flag=0;
//                 cout<<"Enter the valid Name."<<endl;
//                 break;
//             }
//         }
//         if(flag)
//         {
//             len=strlen(name);
//             delete []this->name;
//             this->name=new char(len+1);
//             strcpy(this->name,name);
//         }*/
//         this->age=age;
//     }
//     void setName(char *name)
//     {
//         int len;
//         len=strlen(name);
//         delete []this->name;
//         this->name=new char(len+1);
//         strcpy(this->name,name);

//         /*int i,flag=1,len;
//         for(i=0;name[i]!='\0';i++)
//         {
//             if(!(name[i]>='a' && name[i]<='z' || name[i]>='A' && name[i]<='Z'))
//             {
//                 flag=0;
//                 cout<<"Enter the valid Name."<<endl;
//                 break;
//             }
//         }
//         if(flag)
//         {
//             len=strlen(name);
//             delete []this->name;
//             this->name=new char(len+1);
//             strcpy(this->name,name);
//         }*/
//     }
//     char* getName()
//     {
//         return name;
//     }
//     void setAge(int age)
//     {
//         /*int flag=1;
//         if(age<0 || age>100)
//         {
//             flag=0;
//             cout<<"Enter the valid Age."<<endl;
//         }
//         if (flag)
//         {
//             this->age=age;
//         }*/
//         this->age=age;
//     }
//     int getAge()
//     {
//         return age;
//     }
//     void display()
//     {
//         cout<<"Name: "<<name<<endl;
//         cout<<"Age: "<<age<<endl;
//     }
//     int validName(char *name)
//     {
//         int i,flag=1,len;
//         for(i=0;name[i]!='\0';i++)
//         {
//             if(!(name[i]>='a' && name[i]<='z' || name[i]>='A' && name[i]<='Z'))
//             {
//                 flag=0;
//                 cout<<"Enter the valid Name."<<endl;
//                 break;
//             }
//         }
//         /*if(flag)
//         {
//             len=strlen(name);
//             delete []this->name;
//             this->name=new char(len+1);
//             strcpy(this->name,name);
//         }*/
//         return flag;
//     }
//     int validAge(int age)
//     {
//         int flag=1;
//         if(age<0 || age>100)
//         {
//             flag=0;
//             cout<<"Enter the valid Age."<<endl;
//         }
//         return flag;
//     }
//     ~Person()
//     {
//         delete []name;
//     }
// };
// int main()
// {
//     char name[20];
//     int age;
//     Person p;
//     p.display();
//     cout<<"Enter Name and Age of person: "<<endl;
//     cin>>name>>age;
//     Person p1(name,age);
//     p1.display();
//     /*cout<<"Enter Name of new person: "<<endl;
//     cin>>name;
//     p.setName(name);
//     p.display();*/
//     if(p1.validName(name))
//     {
//         cout<<"Valid Name."<<endl;
//     }
//     else
//     {
//         {
//         cout<<"Invalid Name."<<endl;
//         }
//     }
//     if((p1.validAge(age)))
//     {
//         cout<<"Valid Age."<<endl;
//     }
//     else
//     {
//         {
//         cout<<"Invalid Age."<<endl;
//         }
//     }
// }

/*#include <iostream>
using namespace std;
#include <string.h>

class Person
{
    int *age;
    char *name;

public:
    // default
    Person()
    {
        age = new int(0);
        name = new char[3];
        strcpy(this->name, "NA");
    }
    // parametrised constructor
    Person(int age, char *name)
    {
        this->age = new int(age);
        int len = strlen(name);
        this->name = new char[len + 1];
        strcpy(this->name, name);
    }
    // setter getter
    void setAge(int age)
    {
        *(this->age) = age;
    }
    int getAge()
    {
        return *age;
    }
    void setName(char *name)
    {
        delete[] this->name;
        int len = strlen(name);
        this->name = new char(len + 1);
        strcpy(this->name, name);
    }
    char* getName()
    {
        return name;
    }
    // function to check if the enterd name is valid or not.
    int Validate()
    {
        int i;
        int flag = 1;

        if ((*age) < 1 || (*age) > 100)
        {
            flag = 0;
            cout << "Sorry You've enntered an invalid age." << endl;
        }
        while(name[i]!='\0')
        {
            if (!(name[i] >= 'a' && name[i] <= 'z' || name[i] >= 'A' && name[i] <= 'Z'))
            {
                flag = 0;
                cout << "Sorry!! You've enterd an invalid name." << endl;
                break;
            }
            i++;
        }
        return flag;
    }
   void display()
    {

       int var=Validate();
        if(var==1)
        {
            cout<<"Age = "<<*age<<endl;
            cout<<"Name = "<<name<<endl;
        }
        else
        {
            cout<<"Invalid details"<<endl;
        }
    }
    ~Person()
    {
        delete age;
        delete[] name;
    }

};
int main()
{
    char name[20];
    int age;
    cout << "Enter the name of the person : " << endl;
    cin >> name;
    cout << "Enter the age of the person : " << endl;
    cin >> age;
    Person p1(age, name);
    p1.display();
    return 0;
}*/

/*#include <iostream>
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
class Employee : protected Person
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
}*/

// #include <iostream>
// using namespace std;
// class Addition
// {
// public:
//   int add(int a, int b)
//   {
//     return a + b;
//   }
//   int add(int a, int b, int c)
//   {
//     return a + b + c;
//   }
// };

// int main()
// {
//   Addition obj;
//   cout << obj.add(10, 20);
//   cout << obj.add(10, 20, 30);
// }

// #include <iostream>
// using namespace std;
// class Addno1
// {
// public:
//   int add(int a, int b)
//   {
//     return a + b;
//   }
// };
// class Addno2:public Addno1
// {
//    public:
//    int add(int a,int b,int c)
//   {
//     return a + b + c;
//   }
// };

// int main()
// {
//   Addno2 obj;
//   // cout << obj.add(10, 20);
//   cout << obj.add(10, 20, 30);
// }

// #include <iostream>
// using namespace std;
// class A
// {
//   public:
// void disp()
// {
//  cout<<" It's Uday";
// }
// };
// class B:public A{
//    public:
// void disp()
// {
//  cout<<" Uday is studing";
// }

// };
// int main()
// {
//   B obj;
//   obj.disp();
// }

// #include <iostream>
// using namespace std;
// class Base
// {
//   public:
//   virtual int add(int a, int b)
//   {
//     return a+b;
//   }
// };
// class Derived:public Base
// {
//   public:
//   int add(int a, int b,int c)
//   {
//     return a+b+c;
//   }
// };
// int main()
// {
//   Base *ptr;
//   Derived obj;
//   ptr = &obj;
//   ptr->add(10,20);
//   ptr->add(10,20,30);

//   // Derived obj;
//   //  obj.add(10,20);
//   // obj.add(10,20,30);
// }

/*#include <iostream>
using namespace std;
class Base
{
  public:
 virtual  void display()
  {
    cout<<"Base ";
  }
};
class Derived :public Base
{
  public:
  void display()
  {
    cout<<"Derived";
  }
};
int main()
{
  Base *ptr;
  Derived obj;
 ptr = &obj;
 ptr -> display();
}*/

// #include <iostream>
// using namespace std;
// class Base
// {
// public:
//   void display()
//   {
//     cout << "Base ";
//   }
// };
// class Derived : public Base
// {
// public:
//   void display()
//   {
//     cout << "Derived";
//   }
// };
// int main()
// {
//   Base *ptr;
//   Derived obj;
//   ptr = &obj;
//   ptr->display();
// }

// #include <iostream>
// using namespace std;
// class Time
// {
// private:
//   int hour, minute, second;

// public:
//   Time()
//   {
//     hour = 0;
//     minute = 0;
//     second = 0;
//     cout << "comes here" << endl;
//   }
//   Time(int hour, int minute, int second)
//   {
//     this->hour = hour;
//     this->minute = minute;
//     this->second = second;
//     cout << "comes here1" << endl;
//   }
//   // void addTime(Time t1, Time t2)
//   // {
//   //     this->second = t1.second + t2.second;
//   //     this->minute = second / 60;
//   //     this->second = second % 60;
//   //     this->minute = minute + t1.minute + t2.minute;
//   //     this->hour = minute / 60;
//   //     this->minute = minute % 60;
//   //     this->hour = hour + t1.hour + t2.hour;
//   // }
//   Time operator+(Time &t2)
//   {

//     Time temp;
//     temp.second = this->second + t2.second;
//     temp.minute = this->minute + t2.minute;
//     temp.hour = this->hour + t2.hour;

//     return temp;
//   }
//   void operator++(int)
//   {
//     (this->second)++;
//     (this->minute)++;
//     (this->hour)++;
//   }
//    void operator++()
//   {
//     (this->second)++;
//     (this->minute)++;
//     (this->hour)++;
//     cout<<"I am come in preincrement method";
//   }
//   void operator--(int)
//   {
//     (this->second)--;
//     (this->minute)--;
//     (this->hour)--;
//   }

//   void display()
//   {
//     cout << "Hour = " << hour << endl;
//     cout << "Minute = " << minute << endl;
//     cout << "Second = " << second << endl;
//   }
// };
// int main()
// {
//   Time t1;
//   Time t2(10, 20, 30);
//   Time t3;

//   t3 = t1 + t2;
//   // t3=t1+t2;

//   // t1++;
//   // // t1++;
//   // // t1++;
//   // t1--;
//   ++t1;
//   t1.display();
// }

// #include <iostream>
// using namespace std;
// class Time
// {
// private:
//   int *hour, *minute, *second;

// public:
//   Time()
//   {

//     this->hour = new int(0);
//     this->minute = new int(0);
//     this->second = new int(0);
//     // hour = 0;
//     // minute = 0;
//     // second = 0;
//     // cout << "comes here" << endl;
//   }
//   Time(int hour, int minute, int second)
//   {
//     this->hour = new int(hour);
//     this->minute = new int(minute);
//     this->second = new int(second);

//     // this->hour = hour;
//     // this->minute = minute;
//     // this->second = second;
//     // cout << "comes here1" << endl;
//   }
//   // void addTime(Time t1, Time t2)
//   // {
//   //     this->second = t1.second + t2.second;
//   //     this->minute = second / 60;
//   //     this->second = second % 60;
//   //     this->minute = minute + t1.minute + t2.minute;
//   //     this->hour = minute / 60;
//   //     this->minute = minute % 60;
//   //     this->hour = hour + t1.hour + t2.hour;
//   // }
//   Time operator+(Time t2)
//   {
//     Time temp;
//     // cout<<  *(this->hour);
//     // cout<<  *(this->minute);
//     // cout<<  *(this->second);

//     // cout<<  *(t2.hour);
//     // cout<<  *(t2.minute);
//     // cout<<  *(t2.second);

//     // cout<<  this->hour;
//     // cout<<  this->hour;

//     //  Time temp;

//     *temp.second = *(this->second)+*(t2.second);
//     *temp.minute = *(this->minute) + (*(t2.minute));
//     *temp.hour = *(this->hour) + *(t2.hour);
//      return temp;
//   }
//   void operator++(int )
//   {
//     *((this->second))++;

//     *((this->minute))++;
//     *((this->hour))++;
//   }
//   void operator++()
//   {
//     *((this->second)++);
//     *((this->minute)++);
//     *((this->hour)++);
//     cout << "I am come in preincrement method";
//   }
//   void operator--(int)
//   {
//     *((this->second)--);
//     *((this->minute)--);
//     *((this->hour)--);
//   }

//   void display()
//   {
//     cout << "Hour = " << *hour << endl;
//     cout << "Minute = " << *minute << endl;
//     cout << "Second = " << *second << endl;
//   }
// };
// int main()
// {
//   Time t1(10,20,30);
//   Time t2(10, 20, 30);
//   Time t3;

//   // t3 = t1 + t2;
//   //t3=t1+t2;

//   // t1++;
//   // // t1++;
//   t1++;
//   t1.display();
//   // t1--;
//   // ++t2;
//   //t3.display();
// }

// #include <iostream>
// using namespace std;
// class Akshay;
// class Uday
// {
//   private:
//   int money = 10;
//     friend void Shubham(Uday,Akshay);
//   };
// class Akshay
// {
//   private:
//   int money = 20;
//   friend void Shubham(Uday,Akshay);
// };
// void Shubham(Uday obj1,Akshay obj2)
// {
//   cout<<"Sum = "<<obj1.money+obj2.money;
// };
// int main()
// {
//   Uday obj1;
//   Akshay obj2;
//   Shubham(obj1,obj2);
// }

// #include <iostream>
// using namespace std;
// class Time
// {
//   private:
//   int  *hour, *min, *sec;
//   public:
//   Time ()
//   {
//     this->hour=new int(0);
//     this->min=new int(0);
//     this->sec=new int(0);
//   }
//   Time (int hour, int min, int sec)
//   {
//     this->hour=new int(hour);
//     this->min=new int(min);
//     this->sec=new int(sec);
//   }
//   Time operator+(Time t2)
//   {
//     Time temp;
//     // *temp.second = *(this->second)+*(t2.second);
//     // *temp.minute = *(this->minute) + (*(t2.minute));
//     *temp.hour = *(this->hour) + *(t2.hour);
//      return temp;

//   }
//   void display()
//   {
//     cout<<"Hour = "<<*hour<<endl;
//     cout<<"Minute = "<<*min<<endl;
//     cout<<"Second = "<<*sec<<endl;
//   }

// };
// int main()
// {
//   Time t1;
//   Time t2(1,2,3);
//   Time t3;
//   t3=t1+t2;
//   // t1.display();
//   // t2.display();
//   t3.display();
// }

// #include <iostream>
// using namespace std;
// class Circular_Queue
// {
// private:
//     int rear;
//     int front;
//     int count;
//     int arr[5];

//     int isFull()
//     {
//         if (count == 5)
//         {
//             return 1;
//         }
//         else
//         {
//             return 0;
//         }
//     }
//     int isEmpty()
//     {
//         if (count == 0)
//         {
//             return 1;
//         }
//         else
//         {
//             return 0;
//         }
//     }
//     public :
//     Circular_Queue()
//     {
//         front=0;
//         rear=0;
//         count=0;
//     }
//     void insert(int a)
//     {
//         if(isFull())
//         {
//             cout<<"Circular Queue is Full"<<endl;
//         }
//         else
//         {
//             rear=rear%5;
//             arr[rear]= a;
//             rear++;
//             count++;
//         }
//     }
//     void _delete ()
//     {
//         if(isEmpty())
//         {
//             cout<<"Circular Queue is Empty"<<endl;
//         }
//         else
//         {
//             front = front%5;
//             cout<<arr[front]<<" is Deleted"<<endl;
//             front++;
//             count--;
//         }
//     }
//     void traverse ()
//     {
//         if (isEmpty())
//         {
//             cout<<"Circular Queue is Empty"<<endl;
//         }
//         else
//         {
//            int  temp=front;
//             for(int i=1;i<=count;i++)
//             {
//                 temp=temp%5;
//                 cout<<arr[temp]<<endl;
//                 temp++;
//             }
//         }
//     }
// };
// int main()
// {
//     Circular_Queue obj;

//     cout<<"1. Insert"<<endl;
//     cout<<"2. Delete"<<endl;
//     cout<<"3. Traverse"<<endl;
// }

// #include <iostream>
// using namespace std;
// class Sorting
// {
// public:
//   int sorting(int *arr, int a, int size)
//   {
//     for (int i = 0; i < size; i++)
//     {

//     }
//   }
// };
// int main()
// {
//   Sorting obj;
//   int *arr, a, size, i;
//   cout << "Enter the size of Array = " << endl;
//   cin >> size;
//   cout << "Enter The Element Before Swapping = ";
//   for (int i = 0; i < size; i++)
//   {
//     cin >> arr[i];
//   }
//   obj.sorting(arr,a,size);
//   cout<<"After Swapping = ";
// }

// // #include<iostream>
// // using namespace std;
// //     void print(int a[], int n) //function to print array elements
// //     {
// //     int i;
// //     for(i = 0; i < n; i++)
// //     {
// //        cout<<a[i]<<" ";
// //     }
// //     }
// //  void bubble(int a[], int n) // function to implement bubble sort
// //  {
// //  int i, j, temp;
// //    for(i = 0; i < n; i++)
// //     {
// //       for(j = i+1; j < n; j++)
// //         {
// //             if(a[j] < a[i])
// //             {
// //                 temp = a[i];
// //                 a[i] = a[j];
// //                 a[j] = temp;
// //             }
//         }
//     }

//  }
// int main()
// {
//     int i, j,temp;
//     int a[5] = {45, 1, 32, 13, 26};
//     int n = sizeof(a)/sizeof(a[0]);
//     cout<<"Before sorting array elements are - \n";
//     print(a, n);
//     bubble(a, n);
//     cout<<"\nAfter sorting array elements are - \n";
//     print(a, n);
// return 0;
// }

#include <iostream>
using namespace std;
class Sorting
{
public:
  static int bubbleSort(int *arr, int a, int size)
  {
    int temp,i;
    for (int i = 0; i < size - 1; i++)
    {
      for (int j = 0; j < size - 1 - i; j++)
      {
        if (arr[j] > arr[j + 1])
        {
          temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = temp;
        }
      }
      // cout << "Sorted Data = ";
      // for (i = 0; i < size; i++)
      // {
      //   cin >> arr[i];
      // }
    }
    cout<<"Sorted Data = ";
    for (i = 0; i < size; i++)
    {
        cout<< arr[i] <<endl;
    }
  }
};
int main()
{
  int *arr, a, size, i;

  cout << "Enter The Size of Array = ";
  cin >> size;

  cout << "Enter The Element of Array " << endl;
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  Sorting::bubbleSort(arr, a, size);
  cout << "Sorted Data is " << a << endl;
}
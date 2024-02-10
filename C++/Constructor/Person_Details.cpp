#include <iostream>
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
}
#include <iostream>
using namespace std;
#include <string.h>
class Person
{
    int age;
    char *name;

public:
    // default constructor
    Person()
    {
        age = 0;
        name = new char[3];
        strcpy(name, "NA");
    }
    // parameterised
    Person(int age, char *name)
    {
        this->age = age;
        delete[] this->name;
        int len = strlen(name);
        this->name = new char[len + 1];
        strcpy(this->name, name);

        if ((validName(name)))
        {
            cout << "Valid Name." << endl;
        }
        else
        {
            cout << "Invalid Name!!" << endl;
        }
        if ((validAge(age)))
        {
            cout << "Valid Age." << endl;
        }
        else
        {
            cout << "Invalid Age!!" << endl;
        }
    }
    void setName(char *name)
    {
        int len = strlen(name);
        delete[] this->name;
        this->name = new char[len + 1];
        strcpy(this->name, name);
    }
    char *getName()
    {
        return name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    int getAge()
    {
        return age;
    }
    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl<< endl;
    }
    int validName(char *name)
    {
        int i, flag = 1;
        for (i = 0; name[i] != '\0'; i++)
        {
            if (!(name[i] >= 'a' && name[i] <= 'z' || name[i] >= 'A' && name[i] <= 'Z'))
            {
                flag = 0;
                cout << "Sorry!! you've entered the invalid name." << endl;
                break;
            }
        }
        return flag;
    }
    int validAge(int age)
    {
        int flag = 1;
        if (age < 1 || age > 100)
        {
            flag = 0;
            cout << "Sorry!! you've entered the invalid age." << endl;
        }
        return flag;
    }
    ~Person()
    {
        delete[] name;
    }
};
int main()
{
    char name[20];
    int age;
    Person p;
    p.display();
    cout << "Enter the name of the person : " << endl;
    cin >> name;
    cout << "Enter the age of the person : " << endl;
    cin >> age;

    Person p1(age, name);
    p1.display();
    // if ((p1.validName(name)))
    // {
    //     cout << "Valid Name." << endl;
    // }
    // else
    // {
    //     cout << "Invalid Name!!" << endl;
    // }
    // if ((p1.validAge(age)))
    // {
    //     cout << "Valid Age." << endl;
    // }
    // else
    // {
    //     cout << "Invalid Age!!" << endl;
    // }
    return 0;
}
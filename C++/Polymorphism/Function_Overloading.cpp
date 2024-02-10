// #include <iostream>
// using namespace std;
// class Add
// {
//     public:
//     int add(int a, int b)
//     {
//         return a+b;
//     }
//     int add (int a,int b,int c)
//     {
//         return a+b+c;
//     }
// };
// int main()
// {
//     Add obj;
//    cout<<obj.add(10,20);
//     cout<<obj.add(10,20,30);
// }

// #include <iostream>
// using namespace std;
// class Add1
// {
// public:
//     int add(int a, int b)
//     {
//         return a + b;
//     }
// };
// class add2 : public Add1
// {
// public:
//     int add(int a, int b, int c)
//     {
//         return a + b + c + 10;
//     }
// };
// int main()
// {
//     //     add2 obj;
//     //    cout<< obj.add(10,20,30);
//     add2 obj;
//     //    cout<<obj.add(10,20);
//     cout << obj.add(10, 20, 30);
// }

#include <iostream>
using namespace std;
void showinfo(int age)
{
    cout << "Age = " << age << endl;
}

void showinfo(char *name)
{
    cout << "Name = " << name << endl;
}

void showinfo(float sal)
{
    cout << "Salary = " << sal << endl;
}
main()
{
    showinfo(20);
    showinfo("Uday");
    showinfo(50000);
}

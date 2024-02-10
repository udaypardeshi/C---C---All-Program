// #include <iostream>
// using namespace std;
// class Test
// {
//     private:
//     int n;
//     static int count;
//     public:
//     Test()
//     {
//         n=0;
//         count++;
//     }
//     Test (int x)
//     {
//         n=x;
//         count++;
//     }
//     void display()
//     {
//         cout<<n;
//     }
//     static void totalObjects()
//     {
//         cout<<count;
//     }
// };
//  int Test::count;
// int main()
// {
//     Test t1;
//     Test t2(10);
//     Test t3;
//     Test :: totalObjects();
// }
#include <iostream>
using namespace std;
class Test
{
    private:
    int n; 
    static int count;
    public:
    Test()
    {
        n=0;
        count++;
    }
    Test (int x)
    {
        n = x;
        count++;
    }
    void display()
    {
        cout<<n;
    }
    static void totalObjects()
    {
        cout<<count;
    }
};
int Test::count;
int main()
{
    Test t1;
    Test t2(10);
    Test t3;
    Test::totalObjects();
}
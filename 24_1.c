// 1]Enter any three digit number & add First & Third number
/*#include <stdio.h>
int main()
{
    int n;
    printf("Enter any three digit number =");
    scanf("%d",&n);
    int sum = 0;
    int a1 = n%10;
    n = n / 10;
    int a2  = n%10;
    n = n/10;
    int a3 = n%10;
    n = n/10;
    printf("Result = %d", a1+a3);
    return 0;
}*/

// 2] Accept 3 digit Number and reverse it. e.g. 123=>321
/*#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the three digit number =");
    scanf("%d",&n);
    int a1=n%10*100;
    n=n/10;
    int a2=n%10*10;
    n=n/10;
    int a3=n%10;
    n=n/10;
    printf("Result =%d",a1+a2+a3);
}*/

// 3] Swap two numbers without third variable
/*#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two Number =");
    scanf("%d%d",&a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap a=%d and b=%d",a,b);
}*/

// 4] Calculate Area and Circumference of circle
/*#include <stdio.h>
int main()
{
    float radius,area,circumference;
    const float pi=3.14;
    printf("Enter The Radius");
    scanf("%f",&radius);
    area=pi*radius*radius;
    circumference=2*pi*radius;
 printf("Area of a Circle = %f",area);
 printf("Circumference of a Circle =%f",circumference);
}*/

// 5] Accept the number and print if it is Even or Odd.
/*#include <stdio.h>
int main()
{
    int no;
    printf("Accept The Number =");
    scanf("%d", &no);
    (no % 2 == 0) ? printf("Even") : printf("Odd");
    return 0;
}*/

// 6] Accept 2 numbers and print the greater number
/*#include <stdio.h>
int main()
{
     int a,b;
    printf("Enter The Two Number =");
    scanf("%d", &a,b);
    (a>b)?printf("a greater"):printf("b greater");
}*/

// 7] Accept 5 subjects marks, calculate percentage and print if student is pass or fail
// e.g. 60 or greater percentage is pass otherwise fail.
/*#include <stdio.h>
int main()
{
    float c, cpp, java, python, javascript;
    float total,average,percentage;
    printf("The value of C is =");
    scanf("%f",&c);
    printf("The value of cpp is =");
    scanf("%f",&cpp);
    printf("The value of java is =");
    scanf("%f",&java);
    printf("The value of python is =");
    scanf("%f",&python);
    printf("The value of javascript is =");
    scanf("%f",&javascript);
    total=c+cpp+java+python+javascript;
    printf("Total Marks of Subject is =%f\n",total);
    average=total/5.0;
    printf("Average Marks =%f\n",average);
    percentage=(total/500.0)*100;
    printf("Total Percentage is =%f\n",percentage);
    (percentage >=60) ? printf("Pass") : printf("Fail");
}*/

// 8] Print any statement on Console and count letters printed in it.
/*#include <stdio.h>
int main()
{
  int count;
  count=printf("Hello");
  printf("Count Letters = %d",count);
}*/

// Three Digit Reverse Number.
/*#include <stdio.h>
int main()
{
    int n;
    printf("Enter the three digit number = ");
    scanf("%d",&n);
    int sum = 0;
    int a1 = n%10 * 100;
    n = n/10;
    int a2 = n%10 * 10;
    n = n/10;
    int a3 = n%10;
    n = n/10;
    printf("Result %d", a1+a2+a3);
    return 0;
}*/

// Bitwise Operator=
// 1] Bitwise And (&)
/*#include <stdio.h>
int main()
{
    int a=10,b=6;
    int c=a&b;
    printf("%d",c);
}*/

// 2] Bitwise OR (|)
/* #include <stdio.h>
int main ()
{
    int a=10;
    int b=5;
    int c=a|b;

    printf("%d",c);
}*/

// 3] Bitwise Exclusive OR(^)
/*#include <stdio.h>
int main()
{
    int a = 10, b = 6;
    int c = a ^ b;
    printf("%d", c);
}*/

// 4] Left Shift (<<)
/*#include <stdio.h>
int main()
{
    int a = 10, 
    b = a<<1;
    printf("%d",b);
}*/

// 5] Right Shift(>>)
/*#include <stdio.h>
int main()
{
    int a = 10, 
    b = a<<3;
    printf("%d",b);
}*/

/*#include <stdio.h>
int main()
{
    int count;
    count=printf("Hello");
    printf("Enter Hello %d",count);
}*/

/*#include <stdio.h>
int main()
{
    int a = 10, b = 5;
    int c = a&b;
    printf("%d",c);
}*/

/*#include <stdio.h>
int main()
{
    int a = 5,
    b =++a;
    printf("%d",a);
    printf("%d",b);
}*/

/*#include <stdio.h>
int main()
{
    int  a,b,c ;
    printf("Enter the Three Digit Number ");
    scanf("%d%d%d",&a,&b,&c);
    (a>b)?((a>c)?printf("a greater"):printf("c greater")):((b>c)?printf("b greater"):printf("c greater"));
}*/

/*#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Three digit number");
    scanf("%d%d%d",&a,&b,&c);
    (a<b)?((a<c)?printf("a less"):printf("b less")):((a<c)?printf("a less"):printf("c less"));
}*/

/*#include <stdio.h>

int main()
{
    printf("Hello Everyone, My name is Uday Pardeshi.");
    return 0;

}*/
// #include <stdio.h>

/*int main()
{
    printf("Hello World");
    return 0;

}*/

/*#include <stdio.h>
int main()
{
    int age = 21;
    printf("Enter age = %d",age);
}*/

/*#include <stdio.h>
int main()
{
    float pi = 3.14;
    printf("Enter Pi = %f",pi);
}*/

/*#include <stdio.h>
int main()
{
    char star = '*';
    printf("Star = %c",star);
}*/

/*#include <stdio.h>
int main()
{
    int a;
    printf("the value a =",a);
    scanf("%d",&a);

    float b;
    printf("the value of b =",b);
    scanf("%f",&b);

    char c ='u';
    printf("the value of c =",c);
    scanf("%c",&c);

}*/

/*#include <stdio.h>
int main()
{
    int a = 5;
    float b = 4.5;
    char c = 'u';
    float d = a + b;
    printf("The value of a =%d \n", a);
    printf("The value of b =%f \n", b);
    printf("The value of c =%c \n ", c);
    printf("The value of d =%f \n", d);
    printf("The value of a and b =%f \n", a + b);
    return 0;
}*/

/*#include<stdio.h>
int main ()
{
    int a = 5;
    int b = 12;
    printf("Adding two numbers = %d",a+b);
    return 0;
}*/

// #include<stdio.h>
/*int main()
{
    int a,b,c;
    printf("Enter the value = \n",a);
    scanf("%d,&a");
    printf("Enter the value = \n",b);
    scanf("%d,b");
    c=a+b;
    printf("C = ",c);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int a = 6;
       int b = 6;
       int c = a+b;
         printf("C = %d",c);
}*/

/*#include <stdio.h>
int main()
{
    int a = 7;
    int b = 9;
    int c;
    printf("C = %d",a+b,c);
}*/

/*#include <stdio.h>
int main ()
{
    int a,b;
    printf("Enter the value of a = ");
    scanf("%d", &a);

    printf("Enter the value of b = ");
    scanf("%d", &a);

    printf("The addition of a and b %d", a+b);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int length = 3, breadth = 4;
    int area = length*breadth;
    printf("Area of rectangle =%d",area);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int length, breadth, area;
    printf("Enter the length =");
    scanf("%d", &length);
    printf("Enter the breadth =");
    scanf("%d", &breadth);
    area = length*breadth;
    printf("The area of Rectangle =%d",area);
}*/

/*#include <stdio.h>
int main()
{
    int radius=3;
    float pi=3.14;
    printf("The Area of the circle is = %f \n",pi*radius*radius);
    int height = 3;
    printf("The volume of cylinder =%f",pi*radius*radius*height);
}*/

/*#include <stdio.h>
int main()
{
    float celsius = 37;
    float fahrenheit = celsius * 9/5 + 32;
    printf("Celsius to Fahrenheit = %f",fahrenheit);
}*/

/*#include <stdio.h>
int main()
{
    int principle=100,rate=4,years=1;
    int simple_interest = (principle*rate*years)/100;
    printf("The value of Simple Interest is = %d",simple_interest);

}*/

// Arithmatic Operator
/*#include <stdio.h>
int main()
{
    int a = 4;
    int b = 6;
    printf("The addition of a + b is = %d\n", a + b);
    printf("The substraction of a - b is = %d\n", a - b);
    printf("The multiplication of a * b is = %d\n", a * b);
    printf("The divide of a / b is = %d\n", a / b);
}*/

/*#include <stdio.h>
int main()
{
    int x = 2, y = 3;
    printf("The value of 3*x-8*y %d\n",3*x-8*y);
    printf("the value of 3*x/8*y %d\n",3*x/8*y);
     printf("the value of 3*x/8*y %d\n",3*x%8*y);
    return 0;
}*/

/*#include <stdio.h>
int main ()
{
    char dt = '24dec2020';
    printf("%c",dt);
}*/

/*#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter The Number ");
    scanf("%d%d%d,",&a,&b,&c);
    if(a > b)
    {
        if(a > c)
        printf("a is greater\n");
    }
    else
    {
        printf("c is greater\n");
    }


    printf("End");
}*/

/*#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter The Three Number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        printf("a is greater");
    }
    else
    {
        printf("b is greater");
    }
    printf("End");
}*/

/*#include <stdio.h>
int main()
{
    int d = (3.0)/8-2;
    printf(" %d",d);
}*/

/*#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    printf("Divisibility Test Returns %d\n",num%97);
}*/

/*#include <stdio.h>
int main()
{
    int x = 2,
        y = 3,
        z = 3,
        k = 1;
        int result =  3 * x / y - z + k ; //3*2/3-3+1
    printf("%d",  result);
    return 0;
}*/

/*#include <stdio.h>
int main ()
{
    float a = 3.0 + 1;
    printf("%d",a);
}*/

/*#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter The Number");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is even", a);
        {
            printf("Hello");
        }
    }

    else
    {
        printf("%d is odd", a);
        printf("Welcome");
    }
    printf("End\n");
}*/

/*#include <stdio.h>
int main()
{
    int age;
    printf("Enter The Number");
    scanf("%d",&age);
    if(age>=90)
    {
        printf("You can drive",age);
    }
    else
    {
        printf("You can't drive",age);
    }
}*/

/*#include <stdio.h>
int main ()
{
    int age;
    printf("Enter the number");
    scanf("%d",&age);
    if(age<=70&& age>=18)
    {
        printf("You are above 18 below 70, You can drive",age);
    }
    else{
        printf("You can't drive",age);
    }
}*/

// Switch Case
/*#include <stdio.h>
int main()
{
    int rating;
    printf("Enter The Rating = (1-5)\n");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:
        printf("Your Rating is 1\n");
        break;
    case 2:
        printf("Your Rating is 2\n");
        break;
    case 3:
        printf("Your Rating is 3\n");
        break;
    case 4:
        printf("Your Rating is 4\n");
        break;
    case 5:
        printf("Your Rating is 5\n");
        break;

    default:
        printf("Invalid Rating\n");
        break;
    }
}*/

/*#include <stdio.h>
int main ()
{
    int a =10;
    if(a=11)
    {
        printf("I am 11");
    }
    else
    {
        printf("I am not 11");
    }
}*/

/*#include <stdio.h>
int main()
{
    int physics, chemistry, math;
    float total;
    printf("Physics = ");
    scanf("%d", &physics);
    printf("Chemistry = ");
    scanf("%d", &chemistry);
    printf("Mathematics = ");
    scanf("%d", &math);
    total = (physics + chemistry + math) / 3;
    if((total < 40) || physics < 33 || chemistry < 33 || math < 33)
    {
        printf("Percentage = %f\nStudent is Fail.",total);
    }
    else
    {
        printf("Percentage = %f \nStudent is Pass",total);
    }
}*/

/*#include <stdio.h>
int main ()
{
    float tax=0,income;
    printf("Enter The Income = \n");
    scanf("%f",&income);
    if(income>=250000 && income<=500000)
    {
        tax=tax+0.05*(income-250000);
    }
    if(income>=500000 && income<=1000000)
    {
        tax=tax+0.20*(income-500000);
    }
    if(income>=1000000)
    {
        tax=tax+0.30*(income-1000000);
    }
    printf("Your monthly Tax  is %f\n",tax);
}*/

/*#include <stdio.h>
int main()
{
    int year;
    printf("Enter The Number = ");
    scanf("%d",&year);
    if(year % 400 == 0)
    {
        printf("It is a Leap Year");
    }
    else if(year % 100 == 0)
    {
        printf("It is not a Leap Year");
    }
    else if(year % 4 == 0)
    {
        printf("It is a Leap Year");
    }
    else
    {
        printf("It is Not a Leap Year");
    }
}*/

/*#include <stdio.h>
int main()
{
    int n;
    printf("Enter The Number = ");
    scanf("%d", &n);
    if (n >= 4)
    {
        printf("The Number is Greater");
    }
    else
    {
        printf("The Number is Less");
    }
}*/

/*#include <stdio.h>
int main()
{
    char ch;
    printf("Enter The Character = ");
    scanf("%c",&ch);
    if(ch<=122 && ch>=97)
    {
        printf("It is Lowercase");
    }
    else
    {
        printf("It is Not Lowercase");
    }
}*/

/*#include <stdio.h>
int main ()
{
    int a =1;
    printf("Hello\n");
    printf("World\n");
    printf("%d\n",a);
    a++;
    printf("%d\n",a);
    a++;
    printf("%d\n",a);
    a++;
    printf("%d\n",a);
    a++;
    printf("%d\n",a);
    a++;
}*/

/*#include <stdio.h>
int main ()
{
    int i,a;
    for(i=1;i<=600;i++)
   { printf("Hello\n",a);
    printf("World\n",a);}
}*/

/*#include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    while(a<=10)
    {
        printf("%d\n",a);
        a++;
    }
}*/

/*#include <stdio.h>
int main ()
{
    int i=0;
    i=11;
    while(i>10)
    {
        printf("The value of i is %d\n",i);
        i++;
    }
}*/

/*#include <stdio.h>
int main()
{
    int i = 0;
    while (i <= 20)
    {
       if (i >= 10)
        {
            printf("The value of i is %d\n", i);
        }
        i++;
    }
}*/

/*#include <stdio.h>
int main ()
{
    int i = 5;
    printf("The value of i++ is %d\n",i++);
    printf("The value of ++i is %d\n",++i);
    printf("The value of i-- is %d\n",i--);
    printf("The value of --i is %d\n",--i);
}*/

/*#include <stdio.h>
int main ()
{
    int i=0;
    do
    {
        printf("The value of i is %d\n",i);
        i++;
    } while (i<10);
}*/

/*#include <stdio.h>
int main()
{
    int i = 0, n;
    printf("Enter The Natural Number = ");
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i++;
    } while (i<=n);
}*/

/*#include <stdio.h>
int main()
{
    int a=0;
    for(a;a<10;a++)
    {
        printf("The value of a is %d\n",a);
    }
}*/

/*#include <stdio.h>
int main ()
{
    int i,n;
    for(i=0;i<=3;i++)
    {
        printf("%d\n",i);
    }
}*/

/*#include <stdio.h>
int main ()
{
    int i,n;
    printf("Enter The Number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
}*/

/*#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter The Number = ");
    scanf("%d", &n);
    for (i = n; i; i--)
    {
        printf("%d\n", i);
    }
}*/

/*#include <stdio.h>
int main ()
{
    int i=0;
    do
    {
        printf("The value of i is %d\n",i);
        if(i==4)
        {
            break;
        }
        i++;
    } while (i<10);

}*/

/*#include <stdio.h>
int main()
{
    int skip=5, i=0;
    while(i<10)
    {
        i++;
        if(i!=skip)
        {
            continue;
        }
        else
        {
            printf("%d\n",i);
        }
    }
    return 0;
}*/

/*#include <stdio.h>
int main ()
{
    int n,i;
    for(i=1;i>=10;i++)
    {
        printf("%d*%d=%d",i,i*10);
    }
}*/

/*#include <stdio.h>
int main ()
{
    int rating;
    printf("Please Enter The Rating = (1-5)\n");
    scanf("%d",&rating);
    switch (rating)
    {
    case 1 /* constant-expression :*/
/* code */ /*printf("Your Rating is 1");
 break;
 case 2:
 printf("Your Rating is 2");
 break;

default:
printf("Invalid Rating");
 break;
}
}*/

// Functions
/*#include <stdio.h>
void display();
int main()
{
    int a;
    printf("Uday is sleeping\n");
    display();
    printf("Dastgir is sleeping\n");
    return 0;
}
void display()
{
    printf("Shrikant is sleeping\n");
}*/

/*#include <stdio.h>
void fact();
void main()
{
    fact();
}
void fact()
{
    int n,i,fact=1;
    {
        printf("Enter The Number = ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        fact=fact*i;
        printf("Factorial = %d\n",fact);
    }
    printf("Address of Fact is %u\n",&fact);
    printf("Address of Number is %u\n",&n);
}*/

/*#include <stdio.h>
void swap (int*x,int*y);
void main()
{
    int a =10, b =20;
    swap(&a,&b);
    a=a+100;
    printf("a = %d\nb = %d",a,b);
}
void swap (int*x,int*y)
{
   int temp;
   temp=*x;
   *x=*y;
   *y=temp;
}*/

/*#include <stdio.h>

int main()
{
    int n, i, fact=1;
    printf("Enter The Number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
       // printf("Factorial = %d",fact);
    }
     printf("Factorial = %d",fact);
}*/

/*#include <stdio.h>
int factorial(int*);
void main()
{
    int n,fact;
    printf("Enter The Number = ");
    scanf("%d",&n);
    fact=factorial(&n);
    printf("Factorial = %d",fact);
}
int factorial(int *a)
{
    int fact=1,i;
    for(i=1;i<=*a;i++)
    {
        fact=fact*i;
    }
    return fact;
}*/

/*#include <stdio.h>
void main()
{
    int mark[3];
    printf("Enter Physics = ");
    scanf("%d",&mark[0]);
    printf("Enter Chemistry = ");
    scanf("%d",&mark[1]);
    printf("Enter Biology = ");
    scanf("%d",&mark[2]);
}*/

/*#include <stdio.h>
void main()
{
    int mark[3],i;
    for(i=0;i<3;i++)
    {
        printf("Enter Mark = %d\n",mark[3]);
   scanf("%d",&mark[3]);
   // printf("Enter Mark = %d\n",mark[3]);
    }
    //printf("Enter Mark = %d\n",mark[3]);
}*/

/*#include <stdio.h>
void main()
{
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
}*/

/*#include <stdio.h>
void main()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("Hello World\n");
    }
}*/

/*#include <stdio.h>
void main()
{
    int i;
    for(i=0;i<50;i++)
    {
        printf("Harshal\n");
    }
}*/

/*#include <stdio.h>
int main()
{
    int i;
    for(i=0;i<=100;i++)
    {
        printf("%d\n",i);
    }
}*/

/*#include <stdio.h>
int main()
{
    int i;
    for(i=0;i<=10;i++)
    {
        printf("%d\n",i);
    }
}*/

/*#include <stdio.h>
int main()
{
    int mark[3];
    printf("Enter Mark = ");
    scanf("%d",&mark[0]);
    printf("Enter Mark = ");
     scanf("%d",&mark[1]);
    printf("Enter Mark = ");
     scanf("%d",&mark[2]);
     printf("%d,%d,%d",mark[0],mark[1],mark[2]);
}*/

/*#include <stdio.h>
int main()
{
    float price[3];
    printf("Enter The Price = ");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);
    printf("%f,%f,%f",price[0]+(0.18*price[0]),price[1]+(0.18*price[1]),price[2]+(0.18*price[2]));
}*/

/*#include <stdio.h>
void main()
{
  int arr[5],i,j,min=0, max=0;
  for(i=0;i<5;i++)
  {
    printf("Enter The Number = ");
    scanf("%d",&arr[i]);
  }
  for(i=0;i<5;i++)
  {
    printf("%d\n",arr[i]);
  }
  min = arr[0];
  for(j=0;j<5;j++)
  {
    // sum = sum + arr[j]+arr1[j];
    min = min < arr[j] ? min : arr[j];
    max = max > arr[j] ? max : arr[j];
  }
  printf("Min = %d",min);
  printf("Max = %d",max);
}*/

/*#include <stdio.h>+
int main()
{
    int mark[5];
    int *ptr ;
    ptr = &mark[0];
    for(int i=0;i<5;i++)
    {
        printf("Enter The Number = ");
        scanf("%d",ptr);
        ptr--;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\n",mark[i]);
    }
}*/

/*#include <stdio.h>
void printarr(int *ptr , int n){
for(int i = 0;i<5;i++)
{
    printf("Enter The Number =%d\n ",i+1,ptr);
}
}
int main()
{
    int arr[]={1,2,3,4,5};
    printarr(arr,5);
}*/

/*#include <stdio.h>
void main()
{
    int arr[5],arr1[5],i=0,sum=0;
    for(i;i<5;i++)
    {
    printf("Enter The Number = ");
    scanf("%d",&arr[i]);
    }
    for(i;i<5;i++)
    {
       printf("Enter The Number");
       scanf("%d",&arr1[i]);
    }
    for(i;i<5;i++)
    {
        printf("%d\n",arr1[i]);
    }
    for(i;i<5;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum = %d",arr[i]);
}*/

/*#include <stdio.h>
void main()
{
    int arr[5], i = 0, arr1[5], arr2[5];
    for (i; i < 5; i++)
    {
        printf("Enter The Number = ");
        scanf("%d", &arr[i]);
    }
    for (i; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    for (i; i < 5; i++)
    {
        printf("Enter The Number = ");
        scanf("%d", &arr1[i]);
    }
    for (i; i < 5; i++)
    {
        printf("%d\n", arr1[i]);
    }
    for (i; i < 5; i++)
    {
        arr2[i] = arr2[i] + arr1[i];
    }
    printf("%d", arr2[5]);
}*/

/*#include <stdio.h>
void printArray(int *);
void main()
{
    int arr[5],i;
    printf("Enter Five Number = \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printArray(arr);
}
void printArray(int *ptr)
{
    int i;
    printf("Array is \n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",*(ptr+i));
    }
}*/

/*#include <stdio.h>
void sumDigit();
void main()
{
    int arr[5],i,sum=0;
    printf("Enter Five Number = \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Sum = %d ",(sum+i))
    sumDigit();
}
void sumDigit(int *ptr)
{
    int i,sum=0;
    printf("Array is \n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",*(ptr+i));
        sum=sum+(*(ptr+i));
    }
}*/

/*#include <stdio.h>
void  main()
{
    int arr[5],i;
    int *p;
    printf("Enter Array \n");
   for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    p=reverseArray(arr,5);
    printf("Reversed Array\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",p[i]);
    }
}*/

/*#include <stdio.h>
int main()
{
    int n,i,rev=0;
    printf("Enter The Number = ");
    scanf("%d",&n);
    for(i=0;n>0;n=n/10)
    {
        rev=n%10;
        printf("%d ",rev);
    }
}*/

/*#include <stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter The Number = ");
    scanf("%d",&n);
    for(i=0;i>=n;i++)
    {
        sum=sum+i;
      //  printf("%d",i);
    }
    printf("%d",i);
}*/

/*#include <stdio.h>
void main()
{
    int arr[5],i;
    printf("Enter Array \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverseArray(arr,5);
    printf("Reversed Array\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
}
void reverseArray(int *ptr, int size)
{
    int i, temp;
    for(i=0;i<(size/2);i++)
    {
        temp=ptr[i];
        ptr[i]=ptr[size-1-i];
        ptr[size-1-i]=temp;
    }
}*/

/*#include <stdio.h>
void printHello();
int main()
{
    for (int i=0;i<5;i++)
    {
    printHello();
    }
    return 0;
}
void printHello()
{
    printf("Hello\n");
    printf("Welcome\n");
}*/

/*#include <stdio.h>
void printHello();
void main()
{
printHello();
}
void printHello()
{
    printf("Hello\n");
    printf("Good Bye\n");
}*/

/*#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a, b;
    printf("Enter Number = ");
    scanf("%d", &a);
    printf("Enter Number = ");
    scanf("%d", &b);
    int s = sum(a, b);
    printf("Sum = %d", s);
}
int sum(int x, int y)
{
    return x + y;
}*/

/*#include <stdio.h>
#include <string.h>
void main()
{
    int i=0;
    char name[50];
    printf("Enter The Number = ");
    gets(name);
   // puts(name);
    while(name[i]!='\0'){
        i++;
    }
    printf("String is %d",i);
}*/

/*#include <stdio.h>
#include <string.h>
void main()
{
    char name[100];
    int count =0, conconant=0, digit=0 ;
    printf("Enter Name = ");
    gets(name);
    for(int i=0; name[i]!='\0';i++)
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||
       name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U' )
        {
            count ++;
        }
        else if(name[i]>='0' && name[i]<='9')
        {
            digit++;
        }
        else
        {
            conconant++;
        }
    }
    printf("The Vowel is %d\n",count);
    printf("The digit is %d\n",digit);
    printf("The consonant is %d\n",conconant);
}*/

/*#include <stdio.h>
#include <string.h>
void main()
{
    char str[100],temp;
    int i,j;
    printf("Enter String = ");
    scanf("%s",str);
    j=strlen(str);
    for(i=0;i<j/2;i++)
    {
         temp=str[i];
        str[i]=str[j-1-i];
        str[j-1-i]=temp;
    }
    printf("Reverse is %s",str);
}*/

/*#include <stdio.h>
#include <string.h>

int main() {
    char input[100];

    printf("Enter a number: ");
    scanf("%s", input);

    int length = strlen(input);

    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", input[i]);
    }

    printf("\n");

    return 0;
}*/

/*#include <stdio.h>
#include <string.h>

int main() {
    char input[100];

    printf("Enter a number: ");
    scanf("%s", input);

    int length = strlen(input);

    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", input[i]);
    }

    printf("\n");

    return 0;
}*/

/*#include <stdio.h>
#include <string.h>
void main()
{
    char name[100];
    printf("Enter String = ");
    gets(name);

    int l=strl(name);
    printf("Reversed String = ");
    for(int i=0;i>=0;i--)
    {
        printf("%c",name[i]);
    }
    printf(" \n");
}*/

/*#include <stdio.h>
#include <string.h>
void main()
{
    char str[20], str1[20],sum=0;
    int i;
    printf("Enter String = ");
    scanf("%s",str);

    printf("Enter String = ");
    scanf("%s",str);

    for(int i=0;str[i]!='\0';i++)
    {
         sum=str[i]+str1[i];
    }
   printf("%s",sum);
}*/

/*#include <stdio.h>
#include <string.h>
void main()
{
    char str[50],str 1[50]
}*/

/*#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    float cgpa;
    char name[100];
};
int main()
{
    struct student s1;
    s1.roll=1;
    s1.cgpa=7.70;
    strcpy(s1.name,"Uday");
    printf("Student roll number = %d\n",s1.roll);
    printf("Student cgpa = %f\n",s1.cgpa);
    printf("Student name = %s\n",s1.name);

    struct student s2;
    s2.roll=2;
    s2.cgpa=8.70;
    strcpy(s2.name,"Akshay");
    printf("Student roll number = %d\n",s2.roll);
    printf("Student cgpa = %f\n",s2.cgpa);
    printf("Student name = %s\n",s2.name);

    struct student s3;
    s3.roll=3;
    s3.cgpa=9.70;
    strcpy(s3.name,"Shubham");
    printf("Student roll number = %d\n",s3.roll);
    printf("Student cgpa = %f\n",s3.cgpa);
    printf("Student name = %s\n",s3.name);
}*/

/*#include <stdio.h>
#include <string.h>

    struct student
    {
        char name[100];
        int roll;
        float cgpa;
    };
    int main()
    {
        struct student it[100];
        it[0].roll=1;
        it[0].cgpa=7.70;
        strcpy(it[0].name,"Uday");
        printf("Name = %s\n",it[0].name);
        printf("Roll = %d\n",it[0].roll);
        printf("CGPA = %f\n",it[0].cgpa);
    }*/

/*#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
};
int main()
{
    struct student s1 = {"Uday", 23, 7.70};
    printf("Name = %s\n", s1.name);
    printf("Roll = %d\n", s1.roll);
    printf("cgpa = %f\n", s1.cgpa);

    struct student s2 = {"Akshay", 24, 8.90};
    printf("Name = %s\n", s2.name);
    printf("Roll = %d\n", s2.roll);
    printf("cgpa = %f\n", s2.cgpa);
}*/

/*#include <stdio.h>
struct Employee
{
    char name[50];
    char address[50];
    long mobile_number;
};
void main()
{
    struct Employee e;
    printf("Enter Name = ");
    scanf("%s", &e.name);
    printf("Enter Address = ");
    scanf("%s", &e.address);
    printf("Enter Mobile Number = ");
    scanf("%ld", &e.mobile_number);
    printf("Employee Name = %s\n", e.name);
    printf("Employee Address = %s\n", e.address);
    printf("Employee Mobile Number = %ld\n", e.mobile_number);
}*/

/*#include <stdio.h>
typedef struct minute
{
    int hour;
    int minute;
    int second;
} min;
void main()
{
    struct minute min1;
    printf("Enter Hour = ");
    scanf("%d", &min1.hour);
    printf("Enter Minute = ");
    scanf("%d", &min1.minute);
    printf("Enter Second = ");
    scanf("%d", &min1.second);

    struct minute min2;
    printf("Enter Hour = ");
    scanf("%d", &min2.hour);
    printf("Enter Minute = ");
    scanf("%d", &min2.minute);
    printf("Enter Second = ");
    scanf("%d", &min2.second);

    struct minute min3;
    min3.hour = min1.hour + min2.hour;
    min3.minute = min1.minute + min2.minute;
    min3.second = min1.second + min2.second;
    printf("Sum = %d:%d:%d", min3.hour, min3.minute, min3.second);
}*/

/*#include <stdio.h>
#include <string.h>
typedef struct First
{
    int h;
    int m;
    int s;
} time;
time add_time(time , time);
void main()
{
    time t1, t2, t3;
    printf("Enter Time 1  \n");
    printf("Enter Hour = ");
    scanf("%d", &t1.h);
    printf("Enter Minute = ");
    scanf("%d", &t1.m);
    printf("Enter Second = ");
    scanf("%d", &t1.s);

    printf("Enter Time 2  \n");
    printf("Enter Hour = ");
    scanf("%d", &t2.h);
    printf("Enter Minute = ");
    scanf("%d", &t2.m);
    printf("Enter Second = ");
    scanf("%d", &t2.s);

    t3 = add_time(t1, t2);
    printf("Addition is\n Hour = %d\n Minute = %d\n Second = %d", t3.h, t3.m, t3.s);
}
time add_time(time t1, time t2)
{
    time sum;
    sum.s = t1.s + t2.s;
    while (sum.s >= 60)
    {
        sum.s -= 60;
        sum.m++;
    }
    sum.m = t1.m + t2.m;
    while (sum.m >= 60)
    {
        sum.m -= 60;
        sum.h++;
    }
    sum.h = t1.h + t2.h;
    return sum;
}*/

/*#include <stdio.h>
#include <string.h>
struct Employee
{
    char name[50];
    int age;
    float sal;
} Emp;

void main()
{
    struct Employee e[5];
    for (int i = 0; i > 5; i++)
    {
        printf("Enter Name = ");
        scanf("%s", e[i].name);
        printf("Enter Age = ");
        scanf("%d", e[i].age);
        printf("Enter Salary = ");
        scanf("%f", e[i].sal);
        printf("Name = %s\n, Age = %d\n, Salary = %f",e[i].name,e[i].age,e[i].sal);
    }
}*/

/*#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr =(int*)malloc(sizeof(int));
    *ptr=10;
    printf("The value is %d",*ptr);
}*/

/*#include <stdio.h>
#include <stdlib.h>
int * fun();
void main()
{
    int *p;
    p=fun();
     printf("The value is %d",*p);
}
int * fun()
{
    int *ptr = (int *) malloc (sizeof(int));
    * ptr = 10;
    return ptr;
}*/

/*#include <stdio.h>
#include <stdlib.h>
int *fun();
void main()
{
    int *p;
    p=fun();
    printf("The Value is %d",*p);
}
int *fun()
{
   int *ptr=(int *) malloc (sizeof(int));
   *ptr =10;
   free(ptr);
   return ptr;
}*/

/*#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("%d",sizeof(int));
    printf("%f",sizeof(float));
    printf("%c",sizeof(char));
}*/

/*#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("%d\n",sizeof(int));
     printf("%d\n",sizeof(float));
      printf("%d\n",sizeof(char));
}*/

/*#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    ptr[0] = 0;
    ptr[1] = 1;
    ptr[2] = 3;
    ptr[3] = 5;
    ptr[4] = 7;
    for (int i = 0; i > 5; i--)
    {
        printf("%d\n", ptr[i]);
    }
}*/

/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *ptr;
    ptr = (float *)malloc(5 * sizeof(float));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;
    for (int i; i < 5; i++)
    {
        printf("%f\n", ptr[i]);
    }
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *ptr;
    ptr=(float*)calloc(5,sizeof(float));
    for(int i=0;i<5;i++)
    {
        printf("%f\n",ptr[i]);
    }
}*/

/*#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr,n;
    printf("Enter Number = ");
    scanf("%d",&n);
    ptr=(int *)malloc(n * sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("%d\n",ptr[i]);
    }
}*/

/*#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr,n;
    ptr=(int *)calloc(n,sizeof(int));
    printf("Enter Number = ");
    for(int i=0;i<5;i++)
    {
    scanf("%d",&ptr[i]);
    }
ptr=realloc(ptr,8);
    printf("Enter Number = ");
    for(int i=0;i<8;i++)
    {
    scanf("%d",&ptr[i]);
    }
    for(int i=0;i<8;i++)
    {
        printf("Number %d is %d\n",i,ptr[i]);
    }
}*/

/*#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr,n;
    ptr=(int *)calloc(n,sizeof(int));
    printf("Enter Number = ");
    for(int i =0;i<5;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("Number %d is %d\n",i,ptr[i]);
    }
}*/

/*#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));
    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    ptr[3]=7;
    ptr[4]=9;
    for(int i=0;i<5;i++)
    {
        printf("%d\n",ptr[i]);
    }
    ptr=realloc(ptr,6);
    ptr[0]=2;
    ptr[1]=4;
    ptr[2]=6;
    ptr[3]=8;
    ptr[4]=10;
    ptr[5]=12;
    for(int i=0;i<6;i++)
    {
        printf("%d\n",ptr[i]);
    }
}*/

/*#include <stdio.h>
void printHello();
void printGoodBye();
void main()
{
    printHello();
    printGoodBye();
}
void printHello()
{
    printf("Hello\n");

}
void printGoodBye()
{
   printf("Good Bye\n");
}*/

// #include <string.h>
// void main()
// {
//     int a=10 ,b=20;
//     int c=a+b;
//     printf("%d",c);
// }

// #include <stdio.h>
// void main()
// {
//     int i;
//     for(i=1;i<=10;i++)
//     {
//         printf("%d",i);
//     }
// }

// #include<stdio.h>
// int main()
// {
//    float BasicSalary,TA,DA,HRA,GS;
//    printf("Enter Basic Salary=");
//    scanf("%f",&BasicSalary);
//    printf("Enter TA=");
//    scanf("%f", &TA);
//    printf("Enter DA=");
//    scanf("%f", &DA);
//    printf("Enter HRA=");
//    scanf("%f", &HRA);
//    GS=BasicSalary+TA+DA+HRA;
//    printf("Gross Salary=%f",GS);

// }

// #include <stdio.h>
// int main()
// {
//     float principle, rate, time, simple_interest;
//     printf("Enter Principle = ");
//     scanf("%f",&principle);
//     printf("Enter Rate = ");
//     scanf("%f",&rate);
//     printf("Enter Time = ");
//     scanf("%f",&time);
//     simple_interest=(principle*rate*time)/100.0;
//     printf("Simple Interest = %f",simple_interest);
// }

// #include <stdio.h>
// float simple_Interest(float* principle, float *rate, float *time)
// {
//     float simple_interest;
//     simple_interest=((*principle)*(*rate)*(*time))/100.0;
//     // printf("Simple Interest = %f",simple_interest);
//     return simple_interest;
// }
// int main()
// {
//      float principle, rate, time, simple_interest;
//     printf("Enter Principle = ");
//     scanf("%f",&principle);
//     printf("Enter Rate = ");
//     scanf("%f",&rate);
//     printf("Enter Time = ");
//     scanf("%f",&time);
// simple_interest=simple_Interest(&principle,&rate,&time);
//     printf("Simple Interest = %f",simple_interest);
//     return 0;
// }

// #include <stdio.h>
// void main()
// {
//     int arr[5];
//     int max;
//     int temp=0;
//     printf("Enter The array Element");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//    max=arr[0];
// //    max=30
//    for (int i = 0; i < 5; i++)
//     {    
//          // 30<30  30<20 30<10  30<15  30<9 
//         if(max<arr[i])
//         {
//             max=arr[i];
//         }
//     }
//     printf("Max : %d",max);
    
//    int  min=arr[0];
//    for(int i =0;i<5;i++)
//    {
//     if(min>arr[i])
//     {
//         min=arr[i];
//     }
//    }
//    printf("Min = %d",min);

// array reverse
// printf("After Reverse");
//   for(int i=0;i<(5/2);i++)
//   {
//     temp=arr[i];
//     arr[i]=arr[5-1-i];
//     arr[5-1-i]=temp;
//   }
//   for(int i=0;i<5;i++)
//   {
//     printf("%d ",arr[i]);
//   }

// }


#include<stdio.h>  
int main()  
{  
    int x;  
    for(x=-1; x<=10; x++)  
    {  
        if(x < 5)  
            continue;  
        else  
            break;  
        printf("javaTpoint");  
    }  
    return 0;  
}  
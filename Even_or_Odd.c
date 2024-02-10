/*#include <stdio.h>
int main()
{
    int n;
    printf("Enter The Numbers");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("Even",n);
    }
    else
    {
        printf("Odd",n);
    }

}*/

/*#include <stdio.h>
int main()
{
    int n, a;
    printf("Accept Three Digit Number");
    scanf("%d", &n);
    a = n % 10;
    if (a == 5)
    {
        printf("Hello");
    }
    else
    {
        if (a == 4)
        {
            printf("Hi");
        }
        else
        {
            printf("Bye");
        }
    }
}*/

/*#include <stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Accept Three Angles");
    scanf("%d%d%d", &a,&b,&c);
    sum=a+b+c;
    if (sum==180)
    {
        printf("Traingle is Valid");
    }
    else
    {
        printf("Traingle is not Valid");
    }
}*/

/*#include <stdio.h>
#include <ctype.h>

char convert_case(char ch)
{
    if (isupper(ch))
    {
        return tolower(ch);
    }
    else if (islower(ch))
    {
        return toupper(ch);
    }
    else
    {
        // If the character is not a letter, return it as is
        return ch;
    }
}

int main()
{
    char ch1 = 'A';
    char ch2 = 'b';
    char ch3 = '7';

    printf("%c\n", convert_case(ch1)); // Output: 'a'
    printf("%c\n", convert_case(ch2)); // Output: 'B'
    printf("%c\n", convert_case(ch3)); // Output: '7'

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    float qty,rs,dis,price;
    printf("Enter The Quantity");
    scanf("%f", &qty);
    printf("Enter The Price");
    scanf("%f", &rs);
    price = qty * rs;
    if(qty>1000)
    {
     price = price - price * 10 /100;
    }
    printf("Total expenses = %f", price);
}*/

/*#include <stdio.h>
int main()
{
    int n;
    printf("Enter The Number =");
    scanf("%d", &n);
    if(n % 2==0)
    {
        printf("Even Number");
    }
}*/

/*#include <stdio.h>
int main()
{
    float C,Cpp,Java,HTML,CSS;
    float total,average,percentage;
    printf("C =");
    scanf("%f",&C);
    printf("Cpp =");
    scanf("%f",&Cpp);
    printf("Java =");
    scanf("%f",&Java);
    printf("HTML =");
    scanf("%f",&HTML);
    printf("CSS =");
    scanf("%f",&CSS);
    total=(C+Cpp+Java+HTML+CSS);
    average=total/5.0;
    percentage=(total/500.0)*100;
    printf("Percentage=%.2f\n",total);
    printf("Average Marks=%.2f\n",average);
    printf("percentage=%.2f\n",percentage);
    if(percentage<=60)
    {
        printf("Hard Luck! Try Next Time");
    }
}*/

/*#include <stdio.h>
int main()
{
    int year;
    printf("Enter a Year = \n");
    scanf("%d",&year);
    if(year % 400 == 0)
    {
        printf("It is a Leap Year");
    }
    else if(year % 100 ==0)
    {
        printf("It is not a Leap Year");
    }
   else if (year % 4 == 0)
    {
        printf("It is a Leap Year");
    }
    else
    {
        printf("It is not a Leap Year");
    }
}*/

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Character");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch - 32;
        printf("%c", ch);
    }
}

/*#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++);
    {
        printf("Hello\n");
        printf("Welcome\n");
    }
}*/

/*#include <stdio.h>
int main ()
{
    int i;
    for(i=1;i<=5;++i)
    {
        printf("Hello\n");
        printf("Welcome\n");
    }
}*/

/*#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++)
    printf("Hello\n");
}*/

/*#include <stdio.h>
int main ()
{
    int i;
    for(i=1;i<=5;i++)
    printf("Hello\n");
    printf("Welcome\n");
}*/

/*#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++);
    printf("Hello\n");
    printf("Welcome\n");
}*/

/*#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;)
    printf("Hello\n");
    printf("Welcome\n");
}*/

/*#include <stdio.h>
int main()
{
    int i;
    for(i=1; ;)
    printf("Hello\n");
    printf("Welcome\\n");
}*/

/*#include <stdio.h>
int main()
{
    int i;
    for(;;)
    printf("Hello\n");
    printf("Welcome\n");
}*/

/*#include <stdio.h>
int main()
{
    int;
    for(i=1;i<=5;i++)
    {
        printf("Hello\n");
        printf("Welcome\n");
    }
}*/

/*#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        printf("Hello %d\n");
        printf("Welcome\n");
    }
}*/

/*#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=1;i++)
    {
        printf("Hello %d",i);
        printf("Welcome");
    }
}*/

/*#include <stdio.h>
int main ()
{
    int i;
    for(i=1;i<=5;i++)
    {
        printf("Hello%d\n",i);
    }
}*/

/*#include <stdio.h>
int main ()
{
    int i;
    for(i=1;i<=5;i++)
    {
        printf("Hello %d\n",i);
        printf("Welcome\n");
    }
}*/

/*#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        printf("Hello %d\n");
        printf("%d",i);
    }
}*/

/*#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        printf("Hello %d\n",i);
        printf("Welcome\n",i);
    }
}*/

// First 10 Natural Numbers
/*#include <stdio.h>
int main()
{
    int i;
    //for(i=1;i>=10;i++)

    printf(" First 10 Natural Numbers =  ",i);
    for(i=1;i<=10;i++)
{
    printf("%d",i);
}

}*/

// The sum of the 10 Natural Numbers
/*#include <stdio.h>
int main()
{
    int i, sum = 0;
    printf("The first 10 natural numbers = \n");
    for (i = 1; i <= 10; i++)
    {
        sum = sum + i;
        printf(" %d", i);
    }
    printf("\nThe sum is = %d\n", sum);
}*/

// The sum of 20 natural numbers.
/*#include <stdio.h>
int main ()
{
    int i,sum=0;
    printf("The First 20 Natural Numbers = ");
    for(i=1;i<=20;i++)
    {
        sum=sum+i;
        printf(" %d",i);
    }
    printf("\nThe sum is = %d\n",sum);
}*/

/*#include <stdio.h>
int main ()
{
    int i,n, sum=0;
    printf("Enter The Number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum + i;
        printf(" %d",i);
    }
    printf("\nThe sum is = %d",sum);
}*/

/*#include <stdio.h>
int main ()
{
    int i,mult,n;
    printf("Enter The Number");
    scanf("%d",&n);
    for(i=1;i<10;i++);
    {
        mult =n*i;
        printf(" %d*%d=%d",n,i,mult =n*i);
    }

}*/

/*#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter The Number = ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {

        printf("%d * %d = %d\n",n,i,(n*i));
    }
}*/

/*#include <stdio.h>
int main ()
{
    int i,n;
    printf("Enter The Number = ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    printf("%d * %d = %d\n",n,i,(n*i));
}*/

// Factorial Number
/*#include <stdio.h>
int main ()
{
    int i,fact=1,n;
    printf("Enter a Number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is = %d",n,fact);
    return 0;
} */

/*#include <stdio.h>
int main ()
{
    int i,a,n,power=1;
    printf("Enter a Number = ");
    scanf("%d",&n);
    printf("Enter a Power = ");
    scanf("%d",&a);
    for(i=1;i<=n;i++)
    {
        power=power*n;
    }
    printf("%d ^ %d = %d",n,i,power);
}*/

/*#include <stdio.h>
int main()
{
    int x, n, i, p = 1;
    printf("Enter x and n = \n");
    scanf("%d %d", &x, &n);
    for (i = 1; i <= n; i++)
    {
        p *= x;
    }
    printf("%d power %d = %d", x, n, p);
}*/

// Power of the two number
/*#include <stdio.h>
int main()
{
    int i, n, p = 1, a;//x
    printf("Enter The Number = ");
    scanf("%d", &a);
    printf("Enter The Number = ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        p*=a; //power = power * x;
    }
    printf("%d ^ %d = %d",a,n,p);  // printf("Power of %d and %d is %d ", x, y, power)
}*/

// Prime Number or Not
/*#include <stdio.h>
int main ()
{
    int i , n, flag=0;
    printf("Enter The Number = ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag =1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("It's Prime Number");
    }
    else
    {
        printf("It's Not Prime Number");
    }
}*/

/*#include <stdio.h>
int main()
{
    int n, i, flag = 0;
    printf("Enter The Number = ");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("It's a Prime Number");
    }
    else
    {
        printf("It's Not a Prime Number");
    }
}*/

/*#include <stdio.h>
int main()
{
    int i, n, flag = 0;
    printf("Enter The Number = ");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag == 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("It's Prime Number ");
    }
    else
    {
        printf("It's Not Prime Number ");
    }
}*/

/*#include <stdio.h>
int main ()
{
    int i,n,flag=0;
    printf("Enter The Number = ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag =1;
            break;
        }
    }
    if(flag==0)
    {
        printf("It's Prime Number. ");
    }
    else
    {
        printf("It's Not Prime Number ");
    }
}*/

/*#include <stdio.h>
int main()
{
    int x,y,i,p=1;
    printf("Enter The Number = ");
    scanf("%d",&x);
    printf("Enter The Number = ");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
        p=p*x;
    }
    printf("%d ^ %d = %d",x,y,p);
}*/

/*#include <stdio.h>
int main ()
{
    int n,i,a=1,b=-1,c=a+b,fi=0;
    printf("Enter Number = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
      printf("%d\n",b);
    }
    //printf("%d=%d+%d",)
}*/

// Fibonicii Series
/*#include <stdio.h>
int main ()
{
    int n,i,a=1,b=-1,c;
    printf("Enter The Number = ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        c=a+b;
        b=a;
        a=c;
        printf("%d\n ",c);
    }
}*/

// Sum of the Digit
/*#include <stdio.h>
int main()
{
    int n, rem, addition;
    printf("Enter The Number = ");
    scanf("%d", &n);
    for (addition = 0; n > 0; n = n / 10)
    {
        rem = n % 10;              // 123%10=3, 123%10=2, 123%10=1   Number = 3, 2, 1.
        addition = addition + rem; // 3+2+1=6.
                                   // printf("%d\n",addition);
    }
    printf("%d\n", addition);
}*/

// The Reverse Number of All Digit.
// #include <stdio.h>
// int main()
// {
//     int n, rem, a;
//     printf("Enter The Number = ");
//     scanf("%d", &n);
//     for (a = 0; n > 0; n = n / 10)
//     {
//         rem = n % 10;
//         printf("%d", rem);
//     }
//     return 0;
// }

/*#include <stdio.h>
int main()
{
    int n, rem, rev=0, i,backup;
    printf("Enter The Number = ");
    scanf("%d", &n);
    backup=n;
    for (i=0; n > 0; n = n / 10)
    {
        rem = n % 10;
        rev = rev *10 + rem;
    }
    if (backup == rev)
    {
        printf("%d is palindrome",backup);
    }
    else
    {
        printf("%d is not palindrome",backup);
    }234
   // printf("%d",rem);
}*/

// Accept The Number From User. Check the number is palindrome or not.
/*#include <stdio.h>
int main ()
{
    int n,i,rem,rev=0,backup;
    printf("Enter The Number ");
    scanf("%d",&n);
    backup=n;
    for(i=0;n>0;n=n/10)
    {
        rem=n%10;
        rev=rev*10+rem;
    }
    if(backup == rev)
    {
        printf("%d is palindrome",backup);
    }
    else
    {
        printf("%d is Not Palindrome",backup);
    }
}*/

/*#include <stdio.h>
int main()
{
    float n,i,fact=1,sum=0;
    printf("Enter The Number = ");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
       fact = fact * i;
       printf("1/%f + ",fact);
       sum = sum + (1/fact);
    }
    printf("\n sum = %f",sum);
}*/

/*#include <stdio.h>
int main()
{
    float n,i,fact=1,sum=0;
    printf("Enter The Number = ");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        printf("%f/%f+ ",i,fact);
        sum = sum+(i/fact);
    }
    printf("\nsum=%f",sum);
}*/

/*#include <stdio.h>
int main()
{ 
    
    float n,i ,fact = 1, sum = 0;
    printf("Enter The Number = ");
    scanf("%f", &n);
    for (i=1; i <= n; i++)
    {
        fact = fact * i;
        if (i / 2 == 0)
        {
            sum = sum - (i / fact);
        }
        else
        {
            sum = sum + (i / fact);
        }
    }
    printf("\n sum=%f", sum);
}*/

#include <stdio.h>
int main()
{
    int n, rem, a;
    printf("Enter The Number = ");
    scanf("%d", &n);
    for (a = 0; n > 0; n = n / 10)
    {
        rem = n % 10;
        printf("%d", rem);
    }
}
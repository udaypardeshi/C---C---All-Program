/*#include <stdio.h>
void factorial(int*,int*);
void main()
{
    int no,f=1;
    printf("Enter The Number = ");
    scanf("%d",&no);
    factorial(&no,&f);
    printf("Factorial = %d",f);
}
void factorial(int *x, int *f)
{
    int i=1;
    while(i<=*x)
    {
        *f=*f*i;
        i++;
    }
}*/

#include <stdio.h>
void factorial(int *, int *);
void main()
{
    int n, fact = 1;
    printf("Enter The Number = ");
    scanf("%d",&n);
    factorial(&n, &fact);
    printf("Factorial = %d",fact);
}
void factorial(int *x, int *fact)
{
    int i;
    for(i = 1; i <= *x; i++)
    {
        *fact = *fact * i;
    }
}
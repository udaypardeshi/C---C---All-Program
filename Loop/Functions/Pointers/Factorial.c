#include <stdio.h>
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
}
#include <stdio.h>
void Factorial();
void main()
{
    Factorial();
}
void Factorial()
{
    int n,i,Fact=1;
    printf("Enter The Number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    Fact=Fact*i;
    printf("Factorial = %d ",Fact);
}
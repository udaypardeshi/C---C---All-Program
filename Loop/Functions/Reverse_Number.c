#include <stdio.h>
void reverse();
void main()
{
    reverse();
}
void reverse()
{
    int n,i,reverse;
    printf("Enter The Number = ");
    scanf("%d",&n);
    for(i=0;n>0;n=n/10)
    {
        reverse=n%10;
        printf("Reverse Number = %d\n",reverse);
    }
}
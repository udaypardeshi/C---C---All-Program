#include <stdio.h>
int reverse(int*);
void main()
{
    int n,r;
    printf("Enter The Number = ");
    scanf("%d",&n);
    r=reverse(&n);
    printf("Reverse Number = %d",r);
}
int reverse(int *n)
{
    int rem=0,i;
    for(i=0;*n>0;*n=*n/10)
    {
        rem=(rem*10)+(*n%10);
    }
    return rem;
}
#include <stdio.h>
void Sum();
void main()
{
    Sum();
}
void Sum()
{
    int n,Sum,rem;
    printf("Enter The Number = ");
    scanf("%d",&n);
    for(Sum=0;n>0;n=n/10)
    {
        rem=n%10;
        Sum=Sum+rem;
    }
        printf("Sum = %d\n",Sum);
    
}
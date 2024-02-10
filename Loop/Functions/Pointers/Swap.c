#include <stdio.h>
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
}
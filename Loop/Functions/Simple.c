#include <stdio.h>
int main()
{
    int a=10;
    int *ptr=&a;
    int **ptr1=&ptr;
    int***ptr2=&ptr1;
    printf("%d\n",a);
    printf("%u\n",&a);
    printf("%u\n",&ptr);
    printf("%u\n",&*&**ptr2);
    printf("%u\n",&*&*&ptr);
    printf("%u\n",ptr1);
}
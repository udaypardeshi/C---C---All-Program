#include <stdio.h>
void digitSum(arr);
void main()
{
    int arr[5]={10,20,30,40,50};
    digitSum(arr);
}
void digitSum(int *ptr)
{
    int i,sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("Sum of Array is %d",sum);
}
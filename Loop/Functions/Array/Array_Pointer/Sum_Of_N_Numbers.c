#include <stdio.h>
int nNumbersAdd();
void main()
{
    int arr[5],i,sum;
    printf("Enter The Number = \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    sum=nNumbersAdd (arr,5);
    printf("Sum of The Numbers = %d",sum);
}
int nNumbersAdd (int *ptr, int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+ptr[i];
    }
    return sum;
}
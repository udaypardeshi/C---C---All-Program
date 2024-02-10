#include <stdio.h>
void printArray(int *);
void main()
{
    int arr[5],i;
    printf("Enter Five Number = \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printArray(arr);
}
void printArray(int *ptr)
{
    int i;
    printf("Array is \n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",*(ptr+i));
    }
}
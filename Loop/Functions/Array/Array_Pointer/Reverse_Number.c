#include <stdio.h>
void reverseArray();
void main()
{
    int arr[5],i;
    printf("Enter Number = \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverseArray(arr,5);
    printf("Reversed Array \n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
}
void reverseArray (int *ptr, int size)
{
    int i, temp;
    for(i=0;i<(size/2);i++)
    {
        temp=ptr[i];
        ptr[i]=ptr[size-1-i];
        ptr[size-1-i]=temp;
    }
}
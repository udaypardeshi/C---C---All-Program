#include <stdio.h>
void main()
{
    int arr[5],i;
    for(i=0;i<5;i++)
    {
        printf("Enter Number = \n");
        scanf("%d",&arr[i]);
    }
    printf("Array of elements are \n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
}
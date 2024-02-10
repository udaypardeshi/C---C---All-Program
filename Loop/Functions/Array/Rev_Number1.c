#include <stdio.h>
void main()
{
    int arr[5],i,temp=0;
    for(i=0;i<5;i++)
    {
    printf("Enter The Number = ");
    scanf("%d",&arr[i]);
    }
    printf("Before Reverse\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    for(i=0;i<(5/2);i++)
    {
        temp=arr[i];
        arr[i]=arr[5-1-i];
        arr[5-1-i]=temp;
    }
    printf("After Reverse\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
}
#include <stdio.h>
void main()
{
    int arr[5],i,j=0,arr2[5];
    for(i=0;i<5;i++)
    {
        printf("Enter The Number = ");
        scanf("%d",&arr[i]);
    }
    printf("Before Reverse ");
    for(i=0;i<5;i++)
    {
        printf("%d \n",arr[i]);
    }
    for(i=4;i>=0;i--)
    {
        arr2[j]=arr[i];
        j++;
    }
    printf("After Reverse ");
    for(i=0;i<5;i++)
    {
      printf("%d\n",arr2[i]);
    }
}
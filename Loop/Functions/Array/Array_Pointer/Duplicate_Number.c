#include <stdio.h>
void isDuplicate();
void main()
{
    int arr[5];
   // int arr2[5];
    int i;
    printf("Enter the array elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    isDuplicate(arr,5);
}
void isDuplicate(int *ptr,int size)
{
    int i,j;
    int dupli=ptr[0];
    int arr3[5];
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(ptr[i]==ptr[j])
            {
                arr3[i]=ptr[i];
                printf("The duplicate elements is:%d\n",arr3[i]);
            }
        }
    }
    //printf("The duplicate elements is:%d",arr3[i]);
}
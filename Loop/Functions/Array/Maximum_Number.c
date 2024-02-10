#include <stdio.h>
void main()
{
   int arr[5],i=0,max=0;
   for(i;i<5;i++)
   {
   printf("Enter The Number = ");
   scanf("%d",&arr[i]);
   }
   for(i;i<5;i++)
   {
    printf("%d\n",arr[i]);
   }
   max=arr[0];
   for(int j=0;j<5;j++)
   {
    max = max > arr[j] ? max : arr[j];
   }
   printf("Min = %d",max);
}
#include <stdio.h>
void main()
{
   int arr[5],i,sum=0;
   for(i=0;i<5;i++)
   {
    printf("Enter Numbers = ");
    scanf("%d",&arr[i]);
   }
   for(i=0;i<5;i++)
   {
    sum=sum+arr[i];
   }
   printf("Addition of Numbers = %d",sum);
}
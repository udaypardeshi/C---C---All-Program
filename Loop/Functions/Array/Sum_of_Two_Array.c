#include <stdio.h>
void main()
{
  int arr[5],i,j,arr1[5],sum=0;
  for(i=0;i<5;i++)
  {
    printf("Enter The Number = ");
    scanf("%d",&arr[i]);
  }
  for(i=0;i<5;i++)
  {
    printf("%d\n",arr[i]);
  }
   for(i=0;i<5;i++)
  {
    printf("Enter The Number = ");
    scanf("%d",&arr1[i]);
  }
  for(j=0;j<5;j++)
  {
    printf("%d\n",arr1[j]);
  }
  for(j=0;j<5;j++)
  {
    sum = sum + arr[j]+arr1[j];
  }  
  printf("Sum = %d",sum);
}
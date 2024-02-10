/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *ptr;
    ptr=(float*)calloc(5,sizeof(float));
    for(int i=0;i<5;i++)
    {
        printf("%f\n",ptr[i]);
    }
}*/


#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr,n;
    ptr=(int *)calloc(n,sizeof(int));
    printf("Enter Number = ");
    for(int i =0;i<5;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("Number %d is %d\n",i,ptr[i]);
    }
}
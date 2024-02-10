#include <stdio.h>
void maxArray();
void main()
{
    int arr[5]={10,30,56,78,40};
    maxArray(arr);
}
void maxArray(int *ptr)
{
    int i,num=ptr[0];
    for(i=0;i<5;i++)
    {
        if(*(ptr+i)>num)
        {
            num=*(ptr+i);
        }
    }
    printf("Maximum Number %d",num);
}
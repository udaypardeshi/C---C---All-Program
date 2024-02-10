#include <stdio.h>
int sumofTwoArray(int *, int *);
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arr1[5] = {1, 2, 3, 4, 5};
    int *p;
    p = sumofTwoArray(arr, arr1);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }
}
int sumofTwoArray(int *ptr, int *ptr1)
{
    int c[5];

    int i;
    for (i = 0; i < 5; i++)
    {
        c[i] = *(ptr + i) + *(ptr1 + i);
        // printf("%d ", c[i]);
    }
    return c;
}

/*#include <stdio.h>
int * sumofTwoArray(int *,int *, int *);
void main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr3[5];
    int  *p;
    p=sumofTwoArray(arr, arr1, arr3);
    printf("Addition of two array : \n");
    for(int i=0;i<5;i++)
    {
     printf("%d ", p[i]);
    }
}

int * sumofTwoArray(int *ptr, int *ptr1, int *ptr3)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        ptr3[i]= ptr[i] + ptr1[i];
        //printf("%d ", c[i]);
    }
return ptr3;
}*/

/*#include <stdio.h>
int nNumbersAdd();
int main()
{
    int arr[5], i, sum=0;
    printf("Enter Number = \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    sum = nNumbersAdd(arr, 5);
    printf("Sum of N Number = %d", sum);
}
int nNumbersAdd(int *ptr, int size)
{
    int i, sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum = sum + ptr[i];
    }
    return sum;
}*/
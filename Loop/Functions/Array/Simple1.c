#include <stdio.h>
void main()
{
    int arr[5] = {10, 20, 30, 40, 50}, i, x = 5;
    for (i = 0; i < 5; i++)
    {
        printf("%u\n", arr);
        printf("%u\n", &arr[0]);
        printf("%u\n", &arr);
        printf("%d\n", *arr);
        printf("%d\n", arr[3]);
        printf("%d\n", *(arr + 3));
        printf("%d\n", arr[3]);
        printf("%d\n", *(arr + 3));
        // printf("%u\n",*(100+3));
        // printf("%d\n",*112);
        printf("%d\n", *(i + arr));
        // arr=&x;
        arr[0] = 20;
        printf("%d\n", arr[0]);
        printf("%d\n ", &arr[0]);
        // printf("%d",**arr);
        //  printf("%d\n",arr++);
        // printf("%d",++arr);
        printf("%d/n", arr[3]);
    }
}
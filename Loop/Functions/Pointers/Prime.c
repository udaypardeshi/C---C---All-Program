#include <stdio.h>
void number();
void main()
{
    number();
}
void number()
{
    int num, i, flag = 0;
    printf("Enter The number = ");
    scanf("%d", &num);
    int *p = &num;
    for (i = 2; i < *p; i++)
    {
        if (*p % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("It is a Prime Number ");
    }
    else
    {
        printf("It is not a Prime Number ");
    }
}
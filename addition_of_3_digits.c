#include <stdio.h>
int main()
{
    int n;
    printf("Enter 3 digit number - ");
    scanf("%d", &n);
    int sum = 0;
    int a1 = n % 10;
    n = n / 10;
    int a2 = n % 10;
    n = n / 10;
    int a3 = n % 10;

    printf("Result = %d", a1 + a2 + a3);
    return 0;
}
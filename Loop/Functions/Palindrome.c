#include <stdio.h>
void palindrome();
void main()
{
    palindrome();
}
void palindrome()
{
    int n, i, rem, rev = 0, backup;
    printf("Enter The Number = ");
    scanf("%d", &n);
    backup = n;
    for (i = 0; n > 0; n = n / 10)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
    }
    {
        if (backup == rev)
        {
            printf("%d is Palindrome Number", backup);
        }
        else
        {
            printf("%d is not Palindrome Number", backup);
        }
    }
}
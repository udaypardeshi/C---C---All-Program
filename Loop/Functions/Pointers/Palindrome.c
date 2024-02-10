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
    int *ptr=&n;
    backup = n;
    for (i = 0; *ptr > 0; *ptr = *ptr / 10)
    {
        rem = *ptr % 10;
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
#include <stdio.h>
#include <string.h>
int stringCompare(char *, char *);
void main()
{
    char str[50], str1[50];
    int rem;
    printf("Enter The First String = ");
    gets(str);
    printf("Enter The Second String = ");
    gets(str1);
    rem = stringCompare(str, str1);
    if (rem == 0)
    {
        printf("Strings are Equal");
    }
    else
    {
        printf("Strings are not Equal");
    }
}
int stringCompare(char *str, char *str1)
{
    int i = 0, rem;
    while (str1[i] != '\0')
    {
        rem = str[i] - str1[i];
        printf("%d\n", rem);
        if (rem != 0)
        {
            break;
        }
        i++;
    }
    if (rem < 0)
    {
        rem = -1;
    }
    else if (rem > 0)
    {
        rem = 1;
    }
    return rem;
}
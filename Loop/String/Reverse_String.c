/*#include <stdio.h>
#include <string.h>
void main()
{
    char str[100], temp;
    int i, j;
    printf("Enter String = ");
    scanf("%s", str);
    j = strlen(str);
    for (i = 0; i < j / 2; i++)
    {
        temp = str[i];
        str[i] = str[j - 1 - i];
        str[j - 1 - i] = temp;
    }
    printf("Reverse is %s", str);
}*/

#include <stdio.h>
#include <string.h>
void reverseString(char *);
void main()
{
    char str[100], temp;
    int i, j;
    printf("Enter String = ");
    scanf("%s", str);
    reverseString(str);
}
void reverseString(char *str)
{
    int i, j;
    char temp;
    j = strlen(str); // length=stringlength(ptr)
    for (i = 0; i < j / 2; i++)
    {
        temp = str[i];
        str[i] = str[j - 1 - i];
        str[j - 1 - i] = temp;
    }
    printf("Reverse is %s", str);
}
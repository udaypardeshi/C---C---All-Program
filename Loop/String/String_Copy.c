#include <stdio.h>
#include <string.h>
void stringCopy(char *, char *);
void main()
{
    char str[50], str1[50];
    printf("Enter String = ");
    gets(str1);
    stringCopy(str, str1);
    puts(str);
}
void stringCopy(char *str, char *str1)
{
    int i = 0;
    while (str1[i] != '\0')
    {
        str[i] = str1[i];
        i++;
    }
    str[i] = '\0';
}
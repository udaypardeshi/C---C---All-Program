/*#include <stdio.h>
#include <string.h>
void main()
{
    char str[50];
    int i;
    printf("Enter String = ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("%s", str);
}*/

#include <stdio.h>
#include <string.h>
void toUppercase(char *);
void main()
{
    char str[50];
    printf("Enter String = ");
    scanf("%s", str);
    toUppercase(str);
}
void toUppercase(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("%s", str);
}
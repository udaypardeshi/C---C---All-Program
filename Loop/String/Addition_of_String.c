#include <stdio.h>
#include <string.h>
char stringConcat();
void main()
{
    char str1[50], str2[50];
    printf("Enter First String = \n");
    gets(str1);
    printf("Enter Second String = \n");
    gets(str2);
    stringConcat(str1, str2);
    printf("After Joining = \n");
    puts(str1);
}
char stringConcat(char *s1, char *s2)
{
    int i=0;
    int length = strlen(s1);
    while(s2[i]!='\0')
    {
        s1[length] = s2[i];
        length++;
        i++;
    }
    s1[length] = '\0';
}
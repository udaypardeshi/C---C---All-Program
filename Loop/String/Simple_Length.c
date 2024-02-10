#include <stdio.h>
#include <string.h>
void main()
{
    int length;
    char name[50];
    printf("Enter The Name = ");
    gets(name);
    length = stringlength(name);
    printf("String is %d", length);
}
int stringlength(char *ptr)
{
    int i = 0;
    while (ptr[i] != '0')
    {
        
        i++;
    }
    return i;
}
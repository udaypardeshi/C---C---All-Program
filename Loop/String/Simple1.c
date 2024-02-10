#include <stdio.h>
#include <string.h>
void main()
{
    int i=0;
    char name[50];
    printf("Enter The Name = ");
    gets(name);
    while(name[i]!='\0')
    {
        i++;
    }
    printf("String is %d",i);
}
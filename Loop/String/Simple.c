/*#include <stdio.h>
#include <string.h>
void main()
{
    char name[50];
    printf("Enter The Name = ");
    scanf("%s",name);
    printf("String is %s",name);
}*/

#include <stdio.h>
#include <string.h>
void main()
{
    char name[50];
    printf("Enter The Number = ");
    gets(name);
    puts(name);
}
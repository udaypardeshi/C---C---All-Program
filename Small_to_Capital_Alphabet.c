#include <stdio.h>
int main()
{
    char lower;
    int convert;
    printf("Enter the Small Alphabet = ");
    scanf("%c",&lower);
    convert=lower-32;
    printf("The capital alphabet =%c",convert);
    return 0;
}
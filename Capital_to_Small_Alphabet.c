#include <stdio.h>
int main()
{
    char upper;
    int convert;
    printf("Enter the Small Alphabet = ");
    scanf("%c",&upper);
    convert=upper+32;
    printf("The capital alphabet =%c",convert);
    return 0;
}
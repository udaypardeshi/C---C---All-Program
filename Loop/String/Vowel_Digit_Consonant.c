#include <stdio.h>
#include <string.h>
void main()
{
    char name[100];
    int vowel = 0, conconant = 0, digit = 0;
    printf("Enter Name = ");
    gets(name);
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' ||
            name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U')
        {
            vowel++;
        }
        else if (name[i] >= '0' && name[i] <= '9')
        {
            digit++;
        }
        else
        {
            conconant++;
        }
    }
    printf("The Vowel is %d\n", vowel);
    printf("The Digit is %d\n", digit);
    printf("The Conconant is %d\n", conconant);
}


/*#include <stdio.h>
#include <string.h>
void stringname(char *);
void main()
{
    char name[100];
    printf("Enter Name = ");
    gets(name);
    stringname(name);
}
void stringname(char *name)
{
    int vowel = 0, conconant = 0, digit = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' ||
            name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U')
        {
            vowel++;
        }
        else if (name[i] >= '0' && name[i] <= '9')
        {
            digit++;
        }
        else
        {
            conconant++;
        }
    }
    printf("The Vowel is %d\n", vowel);
    printf("The Digit is %d\n", digit);
    printf("The Consonant is %d\n", conconant);
}*/
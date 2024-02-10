#include <stdio.h>
void simple_interest(); // Function Declaration
void main()
{
    simple_interest(); // Function Calling
}
void simple_interest() // Function Defination
{
    float principle, rate, time, simple_interest;
    printf("Enter Principle, Rate, Time \n");
    scanf("%f%f%f",&principle,&rate,&time,&simple_interest);
    simple_interest=(principle*rate*time)/100;
    printf("Simple Interest = %f",simple_interest);
} 
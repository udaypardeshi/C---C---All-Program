// Swapping the Two Numbers
// #include <string.h>
// int main()
// {
//     int a = 10, b = 20;
//     printf("After Swapping");
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("\na = %d",a);
//     printf("\nb = %d",b);
// }

// Simple Interest
// #include <string.h>
// int main()
// {
//     float principle, rate, time, simple_interest;
//     printf("Principle = ",principle);
//     scanf("%f",&principle);
//     printf("\nRate = ",rate);
//     scanf("%f",&rate);
//     printf("\nTime = ",time);
//     scanf("%f",&time);
//     simple_interest = (principle*rate*time)/100;
//     printf("\n Simple Interest = %f",simple_interest);
// }

#include <stdio.h>
int main()
{
    float p, r, t, si;
    printf("Principle = \n",p);
    scanf("%f",&p);
    printf("Rate = \n",r);
    scanf("%f",&r);
    printf("Time = \n",t);
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("Simple Interest = %f\n",si);
}
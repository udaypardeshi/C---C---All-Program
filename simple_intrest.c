#include <stdio.h>
void main()
{
    float principle, rate, time, si;
    printf("Enter principle\n");
    scanf("%f", &principle);
    printf("Enter rate\n");
    scanf("%f", &rate);
    printf("Enter time\n");
    scanf("%f", &time);

    si=(principle*rate*time)/100;
    printf("Simple Interest=%f",si);
}
#include <stdio.h>
void main()
{
    float C,Cpp,Java,HTML,CSS;
    float total,average,percentage;
    printf("C =");
    scanf("%f",&C);
    printf("Cpp =");
    scanf("%f",&Cpp);
    printf("Java =");
    scanf("%f",&Java);
    printf("HTML =");
    scanf("%f",&HTML);
    printf("CSS =");
    scanf("%f",&CSS);
    total=(C+Cpp+Java+HTML+CSS);
    average=total/5.0;
    percentage=(total/500.0)*100;
    printf("Percentage=%.2f\n",total);
    printf("Average Marks=%.2f\n",average);
    printf("percentage=%.2f\n",percentage);
}
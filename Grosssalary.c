#include<stdio.h>
int main()
{
   float BasicSalary,TA,DA,HRA,GS;
   printf("Enter Basic Salary=");
   scanf("%f",&BasicSalary);
   printf("Enter TA=");
   scanf("%f", &TA);
   printf("Enter DA=");
   scanf("%f", &DA);
   printf("Enter HRA=");
   scanf("%f", &HRA);
   GS=BasicSalary+TA+DA+HRA;
   printf("Gross Salary=%f",GS);

}
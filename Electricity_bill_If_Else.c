// #include <stdio.h>

// int main()
// {
//     float unitCharge, totalBill;

//     printf("Enter electricity unit charge: ");
//     scanf("%f", &unitCharge);

//     if (unitCharge <= 50)
//     {
//         totalBill = unitCharge * 0.50;
//     }
//     else if (unitCharge <= 150)
//     {
//         totalBill = 50 * 0.50 + (unitCharge - 50) * 0.75;
//     }
//     else if (unitCharge <= 250)
//     {
//         totalBill = 50 * 0.50 + 100 * 0.75 + (unitCharge - 150) * 1.20;
//     }
//     else
//     {
//         totalBill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unitCharge - 250) * 1.50;
//     }

//     totalBill = totalBill + (0.20 * totalBill);

//     printf("Total electricity bill: Rs. %.2f\n", totalBill);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     float C, Cpp, Java;
//     float total, average, percentage;
//     printf("C = ");
//     scanf("%f", &C);
//     printf("Cpp = ");
//     scanf("%f", &Cpp);
//     printf("Java = ");
//     total = (C + Cpp + Java );
//     average = total / 5.0;
//     percentage = (total / 500.0) * 100;
//     printf("Percentage = %.2f\n", total);
//     printf("Average Marks = %.2f\n", average);
//     printf("percentage = %.2f\n", percentage);
//     if (percentage <= 60)
//      {
//         printf("Hard Luck! Try Next Time");
//     }
//     else
//     {
//         printf("Pass");
//     }
// }

#include <stdio.h>

int main()
{
    float C, Cpp, Java;
    float totalMarks = 300.0;

    printf("Enter Subject Marks\n");
    printf("C = ");
    scanf("%f", &C);

    printf("Cpp = ");
    scanf("%f", &Cpp);

    printf("Java =  ");
    scanf("%f", &Java);

    if (C < 35 || Cpp < 35 || Java < 35)
    {
        printf("Student is Fail.\n");
    }
    else
    {
        float totalObtainedMarks = C + Cpp + Java;
        float percentage = (totalObtainedMarks / totalMarks) * 100.0;
        printf("Student is Pass.\n");
        printf("Percentage: %.2f%%\n", percentage);
    }

    return 0;
}

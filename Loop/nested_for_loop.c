// Simple Pattern
/*#include <stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}*/


/*#include <stdio.h>
int main ()
{
    int n, i, j;
    printf("Enter Number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n-(i-n)&&j<=n+(n-1))
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("/n");
    }

}*/

/*#include <stdio.h>  
#include <conio.h>  
void main()  
{  
    int i, j, rows;  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = rows; i > 0; i--) // define the outer loop  
    {  
        for (j = i; j > 0; j--) // define the inner loop  
        {  
            printf ("* "); // print the Star  
        }  
        printf ("\n");   
    }        
}  */


// Pyramid Pattern
/*#include <stdio.h>
int main()
{
    int n, i, j, k = 0;
    printf("Enter the number of rows = \n");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i, k = 0)
    {
        for (j = 1; j <= n - i; ++j)
        {
            printf("  ");
        }
        while (k != 2 * i - 1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
    return 0;
}*/

// Lower To Higher 
/*#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of rows: \n");
    scanf("%d", &n);
    for (i = n; i >= 1; --i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/

#include <stdio.h>
int main ()
{
    int n, i, j;
    printf("Enter Number = ");
    scanf("%d",&n);
    for(i=n;i>=1;--i)
    {
        for(j=1;j<=i;++j)
        {
            printf("* ");
        }
        printf("\n");
    }
}

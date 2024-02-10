/*#include <stdio.h>
int main()
{
    int i=1;

    while (i <= 5)
    {
        printf("Hello\n");
        i++;
    }
}*/

/*#include <stdio.h>
int main()
{
    int i=1;
    while (i<=5)
    {
        printf("Hello %d \n",i);
        i++;
    }
}*/

/*#include <stdio.h>
int main()
{
   int i=1;
   while(i<=5)
   {
    printf("Hello %d\n",i);
    printf("Welcome\n",i);
    i++;
   }
}*/

#include <stdio.h>
int main ()
{
    int n,i=1,sum=0;
    printf("Enter Number = ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        printf("%d",sum);
        i++;
    }
    printf("%d",sum);
}
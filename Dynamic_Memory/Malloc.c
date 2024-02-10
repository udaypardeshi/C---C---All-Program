// Malloc Syntax Simple
/*#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 10;
    printf("The value is %d", *ptr);
}*/


// Malloc Syntax With Using Function 
/*#include <stdio.h>
#include <stdlib.h>
int * fun();
void main()
{
    int *p;
    p=fun();
     printf("The value is %d",*p);
}
int * fun()
{
    int *ptr = (int *) malloc (sizeof(int));
    * ptr = 10;
    return ptr;
}*/


// Malloc with using Function free pointer value
/*#include <stdio.h>
#include <stdlib.h>
int *fun();
void main()
{
    int *p;
    p=fun();
    printf("The Value is %d",*p);
}
int *fun()
{
   int *ptr=(int *) malloc (sizeof(int));
   *ptr =10;
   free(ptr);
   return ptr;
}*/


/*#include <stdio.h>
#include <stdlib.h>
int *fun();
void main()
{
    int *p;
    p=fun();
    free(p);
    printf("The Value is %d",*p);
}
int *fun()
{
   int *ptr=(int *) malloc (sizeof(int));
   *ptr =10;
   return ptr;
}*/


#include <stdio.h>
#include <stdlib.h>
int *fun();
void main()
{
    int *p;
    p=fun();
    printf("The Value is %d",*p);
    free(p);
}
int *fun()
{
    int *ptr=(int *) malloc (sizeof(int));
    *ptr=10;
    return ptr;
}
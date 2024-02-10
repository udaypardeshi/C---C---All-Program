// #include <stdio.h>
// void main()
// {
//     if (isPalindrome(121)){
//         printf("It is Palindrome Number");
//     }
//     else
//     {
//         printf("It is Not Palindrome Number");
//     }
// }
// int isPalindrome(int Number)
// {
//     int orignalNumber = Number;
//     int rev = 0;
//     while (Number > 0)
//     {
//         rev = (rev * 10) + (Number % 10);
//         Number = Number / 10;
//     }
//     if(orignalNumber == rev)
//     {
//       return 1;
//     }
//     else {
//         return 0;
//     }
// }



#include <stdio.h>
void main ()
{
   int rev = 0;
   int num = 121;
   int temp = num;

   for (int i=0;i<num; num = num / 100)
   {
    rev  = (rev * 10) + (num % 10);
    num = num / 10;
   }
   
    if (temp == num)
    {
        printf("It is Palindrome Number");
    }
    else
    {
        printf("It is Not Palindrome Number");
    }
}


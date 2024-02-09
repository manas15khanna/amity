//Enter the number from the user and calculate the number of digits and the sum of digits using while loop.
#include <stdio.h>
    int main()
{
   int ch, sum, x,count = 0;
   char num[1000];
   printf("Enter a number\n");
   scanf("%s", num);
   sum = ch = 0;
   while (num[ch] != '\0') 
   {
      x  = num[ch] - '0'; 
      sum = sum + x;
      ch++;
      count++;
   }
   printf("Sum of digits of %s = %d\ncount = %d\n", num, sum, count);
   return 0;
}

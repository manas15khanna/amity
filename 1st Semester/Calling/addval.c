#include <stdio.h>
int addNumbers(int num1, int num2)
{
  return num1 + num2;
}
int main()
{
  int num1, num2, sum;
  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);
  sum = addNumbers(num1, num2);
  printf("Sum of %d and %d is %d\n", num1, num2, sum);
  return 0;
}

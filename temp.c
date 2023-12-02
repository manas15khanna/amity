//Check if a number is nice or not
#include <stdio.h>
#include <math.h>
int main()
{
  int a;
  printf("Input the number:");
  scanf("%d", &a);
  float b=sqrt(a);
  int c=sqrt(a);
  if (b==c) {
    printf("The number is a perfect square.\n");
  }
  else {
    printf("The number is not a perfect square\n");
  }
  return 0;
}

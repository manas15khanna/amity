#include <stdio.h>
int main()
{
  int a;
  int b;
  int i=0;
  printf("Number:");
  scanf("%d", &a);
  for (i=0; i<101; i++) {
    b=a*i;
    printf("%d x %d = %d\n", a, i, b);
  }
}

#include <stdio.h>
int main()
{
 int x, array[10];
  for (int i=0;i<10;i++) {
    printf("Input Digit %d::", i);
    scanf("%d", &array[i]);}
  printf("Enter the position of element you wnat to remove: ");
  scanf("%d", &x);
  for (int i=0;i<10;i++) {
    if (i!=x) {
      printf("%d ", array[i]);
    }
  }
  printf("\n");
  return 0;
}

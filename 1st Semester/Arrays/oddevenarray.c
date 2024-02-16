#include <stdio.h>
int main()
{
  int input, odd[10], even[10], evencount=0, oddcount=0;
  for (int i=0;i<10;i++) {
    printf("Input Digit %d::", i+1);
    scanf("%d", &input);
    if (input%2==0) {
      even[evencount]=input;
      evencount++;
    }
    else {
      odd[oddcount]=input;
      oddcount++;
    }
  }
  printf("Even Integers: ");
  for (int i=0;i<evencount;i++) {
    printf("%d  ", even[i]);
  }
  printf("\nOdd Integers: ");
  for (int i=0;i<oddcount;i++) {
    printf("%d  ", odd[i]);
  }
  printf("\n");
}

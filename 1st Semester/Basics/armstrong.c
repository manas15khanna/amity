#include <stdio.h>

int main() {
  int number, originalNumber, remainder, sum = 0;

  printf("Enter the number: ");
  scanf("%d", &number);

  originalNumber = number;

  while (number != 0) {
    remainder = number % 10;
    sum += remainder * remainder * remainder;
    number /= 10;
  }

  if (sum == originalNumber) {
    printf("%d is an Armstrong number.\n", originalNumber);
  } else {
    printf("%d is not an Armstrong number.\n", originalNumber);
  }

  return 0;
}

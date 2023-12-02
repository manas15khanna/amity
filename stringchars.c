#include <stdio.h>
#include <string.h>
int main()
{
  char string[100];
  int lowchar=0, upperchar=0, digit=0, special=0;
  printf("Input the string you want to check:\n");
  fgets(string, 100, stdin);
  for (int i=0; string[i]!=0; i++)
  {
      if('a'<=string[i] && string[i]<='z'){
      lowchar++;}
       else if ('A'<=string[i] && string[i]<='Z'){
      upperchar++;
    }
    else if ('1'<=string[i] && string[i]<='0') {
      digit++;
    }
    else {
    special++;
    }
  }
  printf("The string has:\nUppercase: %d\nLowercase: %d\nDigits: %d\nSpecial: %d");
  return 0;
}

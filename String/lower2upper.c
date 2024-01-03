/*#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char string[100];
  char upper[100];
  int i=0;
  printf("Input the string:");
  scanf("%s", string);
  fgets(string, 100, stdin);
  printf("%d", strlen(string));
  while (string[i]!= '\0') 
  {
    upper[i] = toupper(string[i]);
    i++;
  }
  printf("%s in uppercase is represented as %s", string, upper); 
  printf("\n");
  return 0;
}*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  //char* toLowerCase(char* s) {
  char string[100];
  char upper[100];
  int i=0;
  fgets(string, 100, stdin);
  while (string[i]!= '\0') 
  {
    upper[i] = tolower(string[i]);
    i++;
  }
  printf("%s", upper);
  return 0;
//}
}

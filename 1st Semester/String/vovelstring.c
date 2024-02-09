//Count total number of vowels and consonants from string
#include <stdio.h>
int main()
{
  int vowel=0, consonant=0;
  char str[100];
  int i;
  char ch;
  printf("Input the string:");
  fgets(str, 100, stdin);
  for (i = 0; str[i] != '\0'; i++) { 
 
        ch = str[i]; 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') { 
            vowel++; 
    }
        else if (ch == ' '){ 
            continue;}
        else 
            consonant++;
  }
  printf("vowels=%d\n", vowel);
  printf("consonant=%d\n", consonant-1);
  return 0;
}

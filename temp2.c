#include <stdio.h> 
#include <string.h> 
/*void main () { 
char str1[12] = "Hello"; 
char str2[12] = "World"; 
char str3[12];
int len ,result;
  len = strlen(str1); 
    printf("%d\n", len);
  strcpy(str3, str1); 
    printf("%s\n", str3 );
  strcat(str2, str1); 
    printf("%s\n", str2); 
  result = strcmp(str1, str2);
    printf("%d\n", result);
}
// STRING LENGTH CODE
void main()
{
char str[20];
int i, length=0;
printf("Enter String\n");
fgets(str, 20, stdin);
for(i=0;str[i]!='\0';i++)
length++;
printf("Length of string %s is %d\n",str,length);
}
// STRING COMPARE CODE
int main()
{
char str1[20];
char str2[20];
int value;
printf("Enter the first string:");
scanf("%s",str1);
printf("Enter the second string :");
scanf("%s",str2);
value=strcmp(str1,str2);
if(value==0)
printf("strings are same\n");
else
printf("strings are not same\n");
return 0;
}
//REVERSE STRING USING REVERSE FUNCTION
int main()
char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}
//REVERSE WITHOUT USING STRREV
int main(){
  int i, n;
  char str[20];
  //gets(s);
  //strrev(s);
  scanf("%s",str);
  n=strlen(str);
  printf("\nReversed string is:\n");
  for(int i=n;i>=0;i--)
      {
    printf("%c",str[i]);
      }
  printf("\n\n");
}*/
//PALINDROME
int main()
{
  char a[100], b[100];
  printf("Enter a string to check if it's a palindrome\n");
  scanf("%s", a);
  strcpy(b,a);
  strrev(b);
    if(strcmp(a,b)==0)
      printf("The string is a palindrome.\n");
  else 
  {
    printf("The string isn't a palindrome.\n");
  }
  return 0;
}/*
//PALINDROME WITHOUT FUNCTION
void main()  
 {      
char string1[20];    
  int i, length=0, flag = 0;    
  printf("Enter string\n");   
   scanf("%s",string1);      
  for(i=0;string1[i]!='\0';i++)
length++;
printf("Length of string is %d\n", length);
   for(i=0;i < length ;i++)
{     
    if(string1[i]!=string1[length-i-1])     
{            flag = 1;  
 break;         
}  
    }    
  if (flag==1)
    printf("string is not a palindrome\n");   
 else 
 printf("string is a palindrome\n");      
}*/ 


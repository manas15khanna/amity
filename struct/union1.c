#include <stdio.h>  
#include <string.h>  
union employee    
{   
  int id;    
  char name[50];    
}
e1;
int main( )  
{ 
  char str[50];
  e1.id=1;
  printf("Enter employee Name:");
  fgets(str, 50, stdin);
  strcpy(e1.name, str); 
  printf( "employee 1 id : %d\n", e1.id);  
  printf( "employee 1 name : %s\n", e1.name);  
  return 0;  
}

#include <stdio.h>
/*const int MAX=3;
int main()
{
  int var[]={10, 100, 200};
  int i;
  for (i=0;i<MAX;i++)
  {
    printf("Value of var[%d]=%d\n", i, var[i]);
  }
  return 0;
}*/
const int max=3;
int main()
{
  int var[]={10, 100, 200};
  int i, *ptr[max];
  for (i=0; i<max; i++) {
    ptr[i]=&var[i];
  }
  for (i=0; i<max; i++) {
    printf("Value of var[%d]=%d\n", i, *ptr[i]);
  }
  printf("\n");
  for (i=0; i<max; i++) {
    printf("Value of var[%d]=%x\n", i, *ptr[i]);
  }
  return 0;
}

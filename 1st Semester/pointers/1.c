#include<stdio.h>
int main()
{
  int number=100;
  int *p;
  p=&number;
  //stores the address of number variable
  printf("Address of p variable is %x \n",*p);
  // p contains the address of the number therefore printing p gives the address of number.
  printf("Value of p variable is %d \n",*p); 
  // As we know that * is used to dereference a pointer therefore if we print *p, we will get the value stored at the address contained by p.
  return 0;
}
/*
int *ptr;
  int val=1;
  ptr=&val;
int deref=*ptr;
  printf("%d\n",deref);
}*/

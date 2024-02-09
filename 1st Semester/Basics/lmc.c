#include<stdio.h>
int main(){
  int a, b, lcm, hcf, t;
  printf("Input first number:");
  scanf("%d", &a);
  printf("Input second number:");
  scanf("%d", &b);
  for(int i=a; i>0; i--){
  if ((a%i==0)&&(b%i==0)){
      printf("HCF is %d\n", i);
      break;
    }
  }
  t=a;
  while(1){
    if((t%a==0)&&(t%b==0)){
      printf("LCM is %d\n", t);
      break;
    }
    t++;
  }
}

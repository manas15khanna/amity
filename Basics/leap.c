#include<stdio.h>
int main()
{
    int a;
    printf("Input the year:");
    scanf("%d",&a);
    if (a%1000==0){
        printf("%d is a leap year", a);
    }
    else if (a%100==0){
        printf("%d is not a leap year");
    }
    else if (a%4==0){
        printf("%d is a leap year", a);
    }
    else{
        printf("%d is not a leap year", a);
    }
return 0;
}
#include<stdio.h>
int main()
{
    int a, i;
    double fact=1;
    printf("Enter the number you want to calculate factorial of:");
    scanf("%d", &a);
    for (i=1; i<=a; ++i){
        fact *= i;
    }
    printf("%lf is the factorial of the %d number.",fact, a);
    return 0;
}
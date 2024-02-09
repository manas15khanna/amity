#include<stdio.h>

int main()

{
    int a, sum=0;
    printf("Enter the nummber of natural numbers you want to add:");
    scanf("%d", &a);
    for (int i=1; i<=a; i++){
        sum+=i;
    }
    printf("%d is the sum of the first %d numbers.",sum, a);
    return 0;
}
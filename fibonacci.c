#include<stdio.h>
int main()
{
    int a=0;
    int b=1;
    int x;
    int nth;
    int count=0;
    printf("Enter the number of fibonacci values you require:");
    scanf("%d", &x);
    if (x<=0)
    {
        printf("Please input a positive integer");
    }
    else if (x==1)
    {
        printf("The fibonacci series upto %d terms is %d", x, a);
    }
    else
    {
        while (count<x){
            printf("%d\n", a);
            nth=a+b;
            a=b;
            b=nth;
            count += 1;
        }
    }
    return 0;
}
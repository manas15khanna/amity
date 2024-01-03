#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter principal ammount in rupees:");
        scanf("%d", &a);
    printf("Enter rate of interest:");
        scanf("%d", &b);
    printf("Enter time in years:");
        scanf("%d", &c);
    int d=a*b*c;
    int e=d/100;
    printf("Simple Interest is %d\n", e);
    return 0;
}
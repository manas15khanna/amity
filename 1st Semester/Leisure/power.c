#include <stdio.h>
#include <math.h>
int main()
{
    double d, result;
    printf("Enter principal ammount:");
        scanf("%f", &a);
    printf("Enter rate of interest:");
        scanf("%f", &b);
    printf("Enter number of times interest is compounded per year");
        scanf("%f", &c);
    printf("Enter time in years:");
        scanf("%lf", &d);
    float e=b/c;
    double f=1+e;
    result = pow(f, d);
    float h=a*result;
    printf("The compound interest is %d", h);
    return 0;
}
//A=P(1+r/n)^nt
//a=principal ammount
//b=rate
//c=number of times interest is compunded per year
//d=time in years
#include <stdio.h>
#include <math.h>
int main()
{
    float a;
    float b;
    int c;
    double d;
    printf("Enter principal ammount:");
        scanf("%f", &a);
    printf("Enter rate of interest:");
        scanf("%f", &b);
    printf("Enter number of times interest is compounded per year:");
        scanf("%d", &c);
    printf("Enter time in years:");
        scanf("%lf", &d);
    float interest = a*pow(1+b/(100*c),d*c);
    printf("The final ammount is %f\n\n", interest);
    return 0;
}
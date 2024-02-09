#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("Input A, B, C from the equation Ax^2+Bx+C=0:\n");
    scanf("%d %d %d", &a, &b, &c);
    float dis=b*b-4*a*c;
    float x1, x2;
    if (dis<0)
    {
        printf("The roots are imaginary\n");
    }
    else if (dis==0)
    {
        printf("The roots are real and equal\n");
        x1=0-(b/(2*a));
        printf("The roots are %f, %f\n", x1, x1);
    }
    else if (dis>0)
    {
        printf("The roots are Real and unequal\n");
        x1=(-b+sqrt(dis))/(2*a);
        x2=(-b-sqrt(dis))/(2*a);
        printf("The roots are %f, %f\n", x1, x2);
    }
    else
    {
        printf("The input is wrong");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int a;
    float b, c, total;
    printf("Enter basic salary:");
    scanf("%d", &a);
    if (a<1500)
    {
        b=a*0.10;
        c=a*0.90;
        total=a+b+c;
        printf("Total salary of person is %f\n", total);
    }
    else if (a>1500)
    {
        b=500;
        c=a*0.98;
        total=a+b+c;
        printf("Total salary of person is %f\n", total);
    }
    return 0;
}
//Heron formula Area= underroot(s*(s-a)(s-b)(s-c))
#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter Sides of Triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    float d=a+b+c;
    float e=d/2;
    float x=e-a;
    float y=e-b;
    float z=e-c;
    float total=e*x*y*z;
    float root = sqrt(total);
    printf("Area of the triangle is %f", root);
    return 0;
}

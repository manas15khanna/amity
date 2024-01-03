#include<stdio.h>

int main()

{
    int a = 20;
    float b = 50.1;
    char c = 'C';
    float d = a+b;
    printf("The Integer value is:%d\n", a);
    printf("The Floating value is:%f\n", b);
    printf("The Character value is:%c\n", c);
    printf("The Sum of A and B is :%f\n\n\n", d);
    a=10;
    b=30.5;
    c='D';
    d = a+b;
    printf("The Integer value is:%d\n", a);
    printf("The Floating value is:%f\n", b);
    printf("The Character value is:%c\n", c);
    printf("The Sum of A and B is :%f\n", d);
    return 0;
}
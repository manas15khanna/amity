#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the two numbers to swap:");
    scanf("%d %d",&a, &b);
    printf("Value of A is %d\n", a);
    printf("Value of B is %d\n", b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("New Value of A is %d\n", a);
    printf("New Value of B is %d\n", b);
    return 0;
}
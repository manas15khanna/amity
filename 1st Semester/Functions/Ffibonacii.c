#include <stdio.h>

void fibonacii(int d)
{
    int a=0, b=1, c;
    while (a<=d)
    {
        printf("%d\n", a);
        c=a+b;
        a=b;
        b=c;  
    }
}
int main()
{
    int d;
    printf("Give how many  value you want to print ");
    scanf("%d",&d);
    fibonacii(d);
    return 0;

//code, name, salary, age, department
}

#include <stdio.h>
int main()
{
    int a, sum=0;
    do
    {
        printf("Input the number:");
        scanf("%d", &a);
        sum +=a;
    } while (a!=0);
    printf("sum=%d\n", sum);
}
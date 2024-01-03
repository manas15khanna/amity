#include<stdio.h>
int main()
{
    int a;
    int i=1;
    printf("Enter the numbers you want:");
    scanf("%d", &a);
    while (i<=a)
    {
        printf("%d ", i);
        i++;
    }
}
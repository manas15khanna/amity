#include <stdio.h>
int main()
{
    int input, reverse = 0;
    printf("Input the number:");
    scanf("%d", &input);
    while (input!=0)
    {
        reverse += input % 10;
        input /= 10;
        reverse *= 10;
    }
    reverse /=10;
    printf("Reverse is %d\n", reverse);
    return 0;
}
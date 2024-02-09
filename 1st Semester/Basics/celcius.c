//10th October
#include <stdio.h>
int main()
{
    int a;
    printf("Input the tempreature in celcius:");
    scanf("%d", &a);
    float f=a*9.0/5.0+32;
    printf("%d celcius conveted to farenheit is %f\n", a, f);
    return 0;
}
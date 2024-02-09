#include<stdio.h>
int main()
{
    int a;
    int c=0;
    printf("Enter the number:");
        scanf("%d", &a);
    if (a>0)
    {
        printf("The number %d is positive\n", a);
    }
    else if (a<0)
    {
        printf("The number %d is negative\n", a);
    }
    else if (a==0)
    {
        printf("%d is zero", a);
    }
    
    return 0;
}
#include<stdio.h>
int main()
{
    int a;
    int c=2;
    printf("Enter the number:");
        scanf("%d", &a);
    if (a==0)
    {
        printf("The number %d is neither odd nor even\n", a);
    }
    else if (a%2==0)
    {
        printf("The number %d is even\n", a);
    }
    else
    {
        printf("The number %d is odd\n", a);
    }
    
    return 0;
}
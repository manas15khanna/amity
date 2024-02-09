#include<stdio.h>

int main()
{
    int n,i = 3, count, c;
    printf("\nEnter the number of prime numbers required :  ");
    scanf("%d", &n);
    if(n >= 1)
    {
        printf("\n\nFirst %d prime numbers are :\n", n);
        printf("2\n");
    }
    for(count = 2; count <= n; i++)  
    {
        for(c = 2; c < i; c++)
        {
            if(i%c == 0)
                break;
        }
        if(c == i)
        {
            printf("%d \n", i);
            count++;
        }
    }
    return 0;
}
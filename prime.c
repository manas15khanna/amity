#include<stdio.h>
#include<math.h>
int main()
{
    int a, b;
    printf("Enter number:");
    scanf("%d", a);
    b=sqrt(a);
    for (int i=2; i<=b; i++){
        if (a%i==0){
            printf("%d is not prime", a);
            return 0;
        }
    }
    printf("%d is prime", a);
}
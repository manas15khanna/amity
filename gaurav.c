#include <stdio.h>

int main(){
    int a,i;
    printf("Enter number: ");
    scanf("%d" ,&a);

    for ( i = 0; i <a; i++)
    {
        if(i*i==a){
            printf("number is square.");
        }
        printf("number is not square");
    }
}
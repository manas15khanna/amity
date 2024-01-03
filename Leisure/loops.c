#include<stdio.h>
int main()
{
    int a=10;
    for (int i=0; i<a; i++){
        printf("%d\n", i);
    }
    for (int i=0; i<a; ++i){
        printf("%d\n", i);
    }
    return 0;
}
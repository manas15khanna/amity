#include<stdio.h>
int main()
{
    int a, b;
    char x;
    printf("Enter Expression: ");
    scanf("%d %c %d",&a,&x,&b);
    int c=a+b;
    int d=a-b;
    int e=a*b;
    float f=a/b;
    int g=a%b;

switch(x){
    case '+': printf("Addition=%d\n", c);
        break;
    case '-': printf("Subtraction=%d\n", d);
        break;
    case 'x': printf("Multiplication=%d\n", e);
        break;
    case '/': printf("Division=%f\n", f);
        break;
    case '%': printf("Modulo=%f\n", g);
        break;
    default: printf("Not possible:\n", x);
    }
}
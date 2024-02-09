#include<stdio.h>
int main()
{
    char x;
    printf("Enter Character:");
    scanf("%c", &x);
    switch (x)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("%c is a vovel.\n",x); 
        break;
    default:
        printf("%c is a consonant\n", x);
    }
}
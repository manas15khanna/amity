#include <stdio.h>
int main()
{
    char x;
    printf("Input the character to be detected.");
    scanf("%c", &x);
    if(x >= 'A' && x <= 'Z')
    {
        printf("'%c' is uppercase alphabet.", x);
    }
    else if(x >= 'a' && x <= 'z')
    {
        printf("'%c' is lowercase alphabet.", x);
    }
    else
    {
        printf("'%c' is a special character.", x);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    char str[100];
    char x;
    int i, count;
    printf("Enter any string: ");
    fgets(str, 100, stdin);
    printf("Enter any character to search: ");
    x = getchar();
    count = 0;
    i=0;
    while(str[i] != '\0')
    {
        if(str[i] == x)
        {
            count++;
        }

        i++;
    }
    printf("Total occurrence of '%c' = %d\n\n", x, count);
    return 0;
}

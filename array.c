#include <stdio.h>
int main()
{
    int arr[10];
    int i;
    printf("Enter the ten elements:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}
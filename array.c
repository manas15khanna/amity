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
    printf("The ten elements in the array are:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

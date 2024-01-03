//Create an array of 10 elements and find the max and min out of the array
#include <stdio.h>
int main()
{
    int arr[10];
    int i, min, max;
    printf("Enter the ten elements:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    /*for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }*/
    min=max=arr[0];
    for (int i=0; i<10; i++)
    {
        if (min>arr[i]) min=arr[i];
        if (max<arr[i]) max=arr[i];
    }
    printf("\n");
    printf("max=%d\nmin=%d\n", max, min);
    printf("\n");
    return 0;
}

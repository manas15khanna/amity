#include <stdio.h>
int main()
{
    int nums[10], min, max;
    printf("Enter the 10 numbers:\n");
    for (int i=0; i<10; i++)
        scanf("%d", &nums[i]);
    min=max=nums[0];
    for (int i=0; i<10; i++)
    {
        if (min>nums[i]) min=nums[i];
        if (max<nums[i]) max=nums[i];
    }
    printf("max=%d\nmin=%d\n", max, min);
    return 0;
}
#include <stdio.h>

int main()
{
    int arr[10], max, i;
    printf("Enter ten integer:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d integer: ", i+1);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for(i = 0; i < 10; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("max: %d\n", max);
    return 0;
}
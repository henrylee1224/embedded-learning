#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i, t = 0;
    printf("Original array: \n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    for(i = 0; i < 5-i; i++)
    {
        t = arr[i];
        arr[i] = arr[5-1-i];
        arr[5-1-i] = t;
    }
    printf("\nReverse array: \n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}
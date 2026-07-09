#include <stdio.h>
#define N 3

int main()
{
    int arr[N][N] = {{1, 2, 3}, {5, 6, 4}, {7, 9, 9}};
    int i, j, y = 0, x = 0, max = arr[0][0];
    printf("array: \n");
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("find result: \n");
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
                y = j;
                x = i;
            }
        }
    }
    printf("max = %d\narr[%d][%d]\n", max, x, y);
    return 0;
}
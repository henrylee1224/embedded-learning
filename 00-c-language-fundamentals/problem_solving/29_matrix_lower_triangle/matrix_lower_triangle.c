#include <stdio.h>
#define N 5
int main()
{
    int i, j, arr[N][N] = {{1, 1, 1, 1, 1}, {2, 2, 2, 2, 2}, {3, 3, 3, 3, 3}, {4, 4, 4, 4, 4}, {5, 5, 5, 5, 5}};
    printf("matrix lower triangle: \n");
    for(i = 0; i < N; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\nmatrix upper triangle: \n");
    for(i = 0; i < N; i++)
    {
        for(j = i; j < N; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int i, total = 0;
    printf("1 ~ 100 sum of even:\n\n");
    for(i = 1; i <= 100; ++i)
    {
        if(i % 2 == 0)
        {
            total += i;
            printf("%d is even number.\ncurrent total: %d\n", i, total);
        }
    }
    printf("\nsum: %d\n", total);
    return 0;
}
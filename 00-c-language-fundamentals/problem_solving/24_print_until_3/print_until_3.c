#include <stdio.h>

int main()
{
    int i;
    printf("Results Print:\n");
    for(i = 1; i <= 100; ++i)
    {
        printf("%d\n", i);
        if(i % 3 == 0)
        {
            break;
        }
    }
    return 0;
}
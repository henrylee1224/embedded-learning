#include <stdio.h>

int main()
{
    int pos = 0, neg = 0, zer = 0, i, num[10];
    printf("input ten integers: \n");
    for(i = 0; i < 10; i++)
    {
        printf("the %d integer: ", i+1);
        scanf("%d", &num[i]);
    }
    for(i = 0; i < 10; i++)
    {
        if(num[i] < 0)
        {
            neg++;
        }
        else if(num[i] == 0)
        {
            zer++;
        }
        else if(num[i] > 0)
        {
            pos++;
        }
    }
    printf("positive numbers: %d\nnegative numbers: %d\nzero: %d\n", pos, neg, zer);
    return 0;
}
#include <stdio.h>

int main()
{
    int n, ret, sum = 0, count = 0;
    printf("Enter an Integer: ");
    while((ret = scanf("%d", &n)) == 1)
    {
        sum += n;
        if(n % 2 == 0)
        {
            count++;
        }
        printf("Enter the Next Integer or Press Any non-numeric key to Quit: ");
    }
    printf("number of even numbers: %d\nsum of even number: %d\n", count, sum);
    return 0;
}
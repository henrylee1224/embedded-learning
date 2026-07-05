#include <stdio.h>

int main()
{
    int n, i, flag, count = 0, sum = 0;

    printf("Prime numbers within 100:\n");

    for (n = 2; n <= 100; n++)
    {
        flag = 1;

        for (i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag)
        {
            printf("%d is prime number.\n", n);
            count++;
            sum += n;
        }
    }

    printf("Count of prime numbers: %d\n", count);
    printf("Sum of prime numbers: %d\n", sum);

    return 0;
}
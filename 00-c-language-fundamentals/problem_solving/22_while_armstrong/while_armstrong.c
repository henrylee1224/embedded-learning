#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, arm, n = 100;
    printf("100 ~ 999 armstrong numbers: \n");
    while(n < 1000)
    {
        a = n / 100;
        b = (n / 10) % 10;
        c = n % 10;
        arm = (pow(a, 3) + pow(b, 3) + pow(c, 3));
        if(n == arm)
        {
            printf("%d\n", arm);
        }
        ++n;
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int a, b, c, t;
    printf("input two integer: ");
    scanf("%d%d", &a, &b);
    if(a < b)
    {
        t = a;
        a = b;
        b = t;
    }
    t = a * b;
    while((c = a % b) != 0)
    {
        a = b;
        b = c;
    }
    printf("gcd: %d\n", b);
    printf("lcm: %d\n", t/b);
    return 0;
}
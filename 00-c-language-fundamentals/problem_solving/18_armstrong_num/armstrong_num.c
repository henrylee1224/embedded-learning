#include <stdio.h>
#include <math.h>

int main()
{
    int num, a, b, c;
    printf("Enter an Integer: ");
    scanf("%d", &num);
    while(num < 100 || num > 999)
    {
        printf("Invalid input! enter ^C to quit or please input again: ");
        scanf("%d", &num);
    }
    a = num / 100;
    b = (num / 10) % 10;
    c = num % 10;
    if(num == (pow(a, 3) + pow(b, 3) + pow(c, 3)))
    {
        printf("yes! %d is armstrong number.\n", num);
    }
    else
    {
        printf("no! %d is not armstrong number.\n", num);
    }
    return 0;
}
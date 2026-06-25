#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, max, two_max;
    printf("input three length: ");
    scanf("%f%f%f", &a, &b, &c);
    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    two_max = a + b + c - max;
    if (two_max <= max) {
        printf("Invalid!\n");
        return 0;
    }
    if (two_max > max) {
        if (a == b && b == c) {
            printf("等边三角形!\n");
        } else if (a == b || a == c || b == c) {
            printf("等腰三角形!\n");
        } else if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2)) {
            printf("直角三角形!\n");
        } else if (a == b && pow(a, 2) + pow(b, 2) == pow(c, 2) || a == c && pow(a, 2) + pow(c, 2) == pow(b, 2)|| b == c && pow(b, 2) + pow(c, 2) == pow(a, 2)) {
            printf("等腰直角三角形!\n");
        }
    }
    return 0;
}
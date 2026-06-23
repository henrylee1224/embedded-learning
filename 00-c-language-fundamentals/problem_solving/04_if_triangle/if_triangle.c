#include <stdio.h>

int main() {
    float a, b, c, max;
    printf("input three length: ");
    scanf("%f%f%f", &a, &b, &c);
    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    float two_sum = a + b + c - max;
    if (two_sum > max && a > 0 && b > 0 && c > 0) {
        printf("可以组成三角形!\n");
    } else {
        printf("不能组成三角形!\n");
    }
    return 0;
}
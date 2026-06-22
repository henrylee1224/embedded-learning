#include <stdio.h>

int main() {
    int a, b, c;
    printf("input three numbers:");
    scanf("%d%d%d", &a, &b, &c);
    int t;
    if (a > b) {
        t = a;
        a = b;
        b = t;
    }
    if (a > c) {
        t = a;
        a = c;
        c = t;
    }
    if (b > c) {
        t = b;
        b = c;
        c = t;
    }
    printf("%d %d %d\n", a, b, c);
    return 0;
}

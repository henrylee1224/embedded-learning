#include <stdio.h>

int main() {
    int i, count = 0;
    printf("50 ~ 100 odd numbers: ");
    for (i = 50; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n");
    printf("There are %d odd numbers.\n", count);
    return 0;
}
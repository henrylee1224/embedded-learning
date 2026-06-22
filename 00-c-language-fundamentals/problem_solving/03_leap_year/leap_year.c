#include <stdio.h>

int main() {
    int year;
    printf("input a year number: ");
    if (scanf("%d", &year) != 1) {
        fprintf(stderr, "输入错误\n");
        return 1;
    }
    if (year % 4 == 0 && year % 100 != 0) {
        printf("%d is leap year!\n", year);
    } else if (year % 400 == 0) {
        printf("%d is leap year!\n", year);
    } else printf("%d is not leap year!\n", year);
    return 0;
}
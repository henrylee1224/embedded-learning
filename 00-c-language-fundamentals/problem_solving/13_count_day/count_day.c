#include <stdio.h>

int main() {
    int year, month, day, total = 0;
    int monthdays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    printf("input year-month-day: ");
    scanf("%d-%d-%d", &year, &month, &day);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        monthdays[1] = 29;
    }
    for (int i = 0; i < month-1; i++) {
        total += monthdays[i];
    }
    total += day;
    printf("%d-%d-%d is the %dth of this year.\n", year, month, day, total);
    return 0;
}
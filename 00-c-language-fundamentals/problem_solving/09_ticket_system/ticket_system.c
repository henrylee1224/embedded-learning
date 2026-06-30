#include <stdio.h>

int main() {
    int month, age;
    float ticket;

    printf("input current month: ");
    scanf("%d", &month);


    if (month > 12 || month < 1) {
        printf("month invalid input!\n");
        return 0;
    }

    printf("input age: ");
    scanf("%d", &age);

    if (age < 0 || age > 120) {
        printf("age invalid input!\n");
        return 0;
    }

    if (month > 0 && month < 4 || month > 10 && month <= 12) {
        printf("Off Season:\n");
        if (age >= 0 && age < 18) {    // Kid ticket
            ticket = 20;
            printf(" - Kid ticket: %.2f\n", ticket);
        } else if (age >= 18 && age < 60) {     // Adult ticket
            ticket = 40;
            printf(" - Adult ticket: %.2f\n", ticket);
        } else if (age >= 60) {     // Oldman ticket
            ticket = 20;
            printf(" - Old-man ticket: %.2f\n", ticket);
        }
    }

    if (month >= 4 && month <=10) {
        printf("Peak Season:\n");
        if (age > 0 && age < 18) {
            ticket = 30;
            printf(" - Kid ticket: %.2f\n", ticket);
        } else if (age >= 18 && age < 60) {
            ticket = 60;
            printf(" - Adult ticket: %.2f\n", ticket);
        } else if (age >= 60) {
            ticket = 20;
            printf(" - Old-man ticket: %.2f\n", ticket);
        }
    }
    return 0;
}
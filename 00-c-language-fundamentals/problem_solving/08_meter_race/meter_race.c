#include <stdio.h>

int main() {
    float second;
    char gender;
    printf("input second: ");
    scanf("%f", &second);
    if (second < 8) {
    printf("input gender: ");
    scanf(" %c", &gender);
        if (gender == 'm') {
            printf("man's game!\n");
        } else if (gender == 'f') {
            printf("women's game!\n");
        } else {
            printf("Invalid input!\n");
        }
    } else {
        printf("game over!\n");
    }
    return 0;
}
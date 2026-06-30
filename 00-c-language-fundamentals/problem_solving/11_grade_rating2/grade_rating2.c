#include <stdio.h>

int main() {
    int score, grade;
    printf("input score: ");
    scanf("%d", &score);
    grade = score / 10;

    switch(grade) {
        case 10:
        case 9:
            printf("%d - A\n", score);
            break;
        case 8:
            printf("%d - B\n", score);
            break;
        case 7:
            printf("%d - C\n", score);
            break;
        case 6:
            printf("%d - D\n", score);
            break;
        
        default:
            printf("%d - E\n", score);
    }
    return 0;
}
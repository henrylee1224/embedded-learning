#include <stdio.h>

int main() {
    int score;
    printf("input a score: ");
    scanf("%d", &score);
    if (score < 0 || score > 100) {
        printf("%d is invalid!\n", score);
        return 0;
    } else if (score >= 90) {
        printf("This score(%d) is A!\n", score);
    } else if (score < 90 && score >= 80) {
        printf("This score(%d) is B!\n", score);
    } else if (score < 80 && score >= 70) {
        printf("This score(%d) is C!\n", score);
    } else if (score < 70 && score >= 60) {
        printf("This score(%d) is D!\n", score);
    } else if (score < 60) {
        printf("This score(%d) is E!\n", score);
    }
    return 0;
}
#include <stdio.h>

int main() {
    char grade;
    printf("input grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("excellent!\n");
        break;
    case 'B':
        printf("very good!\n");
        break;
    case 'C':
        printf("nice!\n");
        break;
    case 'D':
        printf("OK!\n");
        break;
    case 'E':
        printf("common!\n");
        break;
    
    default:
        printf("invalid input!\n");
        break;
    }
    return 0;
}
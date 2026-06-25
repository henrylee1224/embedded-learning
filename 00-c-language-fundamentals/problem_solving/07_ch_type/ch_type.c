#include <stdio.h>

int main() {
    char ch;
    printf("input a character: ");
    scanf("%c", &ch);
    if (ch < 32) {
        printf("control character\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("number\n");
    } else if (ch >= 'A' && ch <= 'Z') {
        printf("upper character\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("lower character\n");
    } else {
        printf("other\n");
    }
    return 0;
}
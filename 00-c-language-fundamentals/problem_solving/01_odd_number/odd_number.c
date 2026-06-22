#include <stdio.h>

int odd_number(int n) {
    int a = n;
    if (a < 0) {
        printf("输入错误!\n");
        return -1;
    } else if (a % 2 == 0) {
        printf("%d 是偶数!\n", a);
    } else {
        printf("%d 不是偶数!\n", a);
    }
    return 0;
}

int main() {
    int num = 0;
    printf("请输入一个整数: ");
    scanf("%d", &num);
    odd_number(num);
    return 0;
}
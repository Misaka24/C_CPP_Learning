#include <stdio.h>

int main() {
    int a, b, c, N;

    printf("请输入三人一排剩余人数 a：");
    scanf("%d", &a);
    printf("请输入五人一排剩余人数 b：");
    scanf("%d", &b);
    printf("请输入七人一排剩余人数 c：");
    scanf("%d", &c);

    N = (a * 70 + b * 21 + c * 15) % 105;

    if (N < 10 || N > 100 || N % 3 != a || N % 5 != b || N % 7 != c)
        printf("无解！\n");
    else
        printf("士兵总人数是：%d\n", N);

    return 0;
}

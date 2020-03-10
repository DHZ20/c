/*
读取两个整数的值，然后显示出它们的和、差、积、商和余数
*/
#include <stdio.h>

int main() {
    int a;
    int b;

    printf("输入第一个数:");
    scanf("%d", &a);
    printf("第一个数是 %d\n", a);
    printf("输入第二个数:");
    scanf("%d", &b);
    printf("第二个数是 %d\n", b);

    // 计算两个数的和
    int c;
    c = a + b;
    printf("%d + %d = %d\n", a, b, c);

    // 计算两个数的余
    c = a % b;
    printf("%d %% %d = %d\n", a, b, c);
    return 0;
}
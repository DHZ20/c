/* 编写一段程序，读取两个整数的值，然后计算出它们之间所有整数的和。*/
/* 1, 4 (1+2+3+4) */

#include <stdio.h>

int main() {
    int a, b;
    printf("请输入第一个数：");
    scanf("%d", &a);
    printf("请输入第二个数：");
    scanf("%d", &b);
    int sum = 0;
    int count = 0;

    int x = a;

    do {
        sum = sum + x;
        count = count + 1;
        x = x + 1;
    } while(x <= b);

    printf("sum is %d\n", sum);
    return 0;
}
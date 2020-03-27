/* 编写一段程序，读取两个整数的值，然后计算出它们之间所有整数的和。*/

#include <stdio.h>

int main() {
    int a, b;
    printf("输入第一个数：");
    scanf("%d", &a);
    printf("输入第二个数：");
    scanf("%d", &b);

    int sum = 0;
    int i = a;

    /* 假设第一个数小于第二个数 */
    do {
        sum += i;
        i++;
    } while (i <= b);

    printf("从%d 加到 %d 的和是 %d\n", a, b, sum);
}
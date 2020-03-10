/*
显示读取出的整数的最后一位数字
1234 -> 4
3127 -> 7
*/

#include <stdio.h>

int main() {
    int a;
    printf("请输入一个数字：");
    scanf("%d", &a);
    int b = a % 10;
    printf("%d的最后一位是%d\n", a, b);
    return 0;
}
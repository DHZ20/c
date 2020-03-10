/* 接收用户输入n个数，并求其和 */
/* 动态分配内存 - calloc */
#include <stdio.h>
#include <stdlib.h>

int calc_sum(int a[], int n);

int main() {
    int* a;
    int n;
    int sum = 0;
    // 1. 问用户到底输入多少个数
    printf("一个输入多少个数字？ ");
    scanf("%d", &n);

    // 初始化空间
    a = calloc(n, sizeof(int));

    // 2. 处理用户输入的n个数
    for (int i = 0; i < n; i++) {
        printf("请输入第%d个数: ", i + 1);
        // scanf("%d", &a[i]);
        scanf("%d", a + i);
    }
    
    // 3. 计算n个数的和
    sum = calc_sum(a, n);
    /*
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    */

    printf("sum of %d numbers is %d\n", n, sum);
}

int calc_sum(int* a, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(a + i);
    }
    return sum;
}
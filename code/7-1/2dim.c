/*
 * ============================================================================
 *
 *       Filename:  2dim.c
 *
 *    Description:  二维数组的示例
 *
 *        Version:  1.0
 *        Created:  07/01/2020 10:44:55 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lin chuan , linch1982@gmail.com
 *   Organization:  
 *
 * ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

void print2dArray(int a[][3], int r);

int main() {
    // 1. 随机生成一个4*3的二维数组
    int a[4][3];
    // 遍历二维数组的每个元素，对其赋值
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            a[i][j] = rand() % 100;
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    // 2. 打印这个二维数组
    printf("****************\n");
    print2dArray(a, 4);
    /*
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    */
    // 3. 按照列输出
    printf("****************\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}

void print2dArray(int a[][3], int r) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}

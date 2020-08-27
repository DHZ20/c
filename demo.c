/**
 * @author      : banyuan (linch1982@gmail.com)
 * @file        : demo
 * @created     : Wednesday Aug 26, 2020 09:22:26 CST
 */

#include <stdio.h>

void printBinary(unsigned int x) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (x >> i) & 1);
        if (i % 4 == 0)
            printf(" ");
    }
    printf("\n");
}

int main() {
    unsigned int x = 111;
    int arr[32];
    // 将x的每一个bit放入到arr对应的下标位置
    for (int i = 0; i < 32; i++)
        arr[i] = (x >> i) & 1;

    unsigned int y = 0;

    for (int i = 31; i >= 0; i--)
        y = y + (arr[i] << (31 - i));

    unsigned int z = 0;

    for (int i = 0; i < 32; i++) {
        // 从低到高取每一个bit，并把这个结果计算到z里面去
        z += ((x >> i) & 1) << (31 -i);
    }




    printBinary(x);
    printBinary(z);
    printBinary(y);

}

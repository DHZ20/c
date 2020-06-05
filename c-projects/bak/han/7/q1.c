/**
 * @author      : banyuan (linch1982@gmail.com)
 * @file        : q1
 * @created     : Friday Feb 14, 2020 08:35:24 CST
 */

#include <stdio.h>

int func(int a[], int column_a, int b[], int column_b) {
    int c[3][3];
    c[0][0] = a[column_a*2] * b[0];
    return c[0][0];
}

int main() {
    int a[][4] = {
        {1, 2, 3, 4},
        {2, 2, 2, 2},
        {4, 3, 2, 1}
    };
    int b[][3] = {
        {0, 1, 2},
        {1, 2, 3}
    };
    printf("\n");
    for (int i = 0; i < 3 * 4; i++) {
        printf("%d of a is %d\n", i, *(((int*)a) + i));
    }
    return 0;
}


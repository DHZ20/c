/*
 * ============================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/21/2020 09:24:53 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lin chuan , linch1982@gmail.com
 *   Organization:  
 *
 * ============================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define N 4

int main() {
    for (int i = 1000; i < 10000; i++)
    {
        int a = i % 10;
        int b = i / 10 % 10;
        int c = i / 100 % 10;
        int d = i / 1000 % 10;
        int e = pow(a, N) + pow(b, N) + pow(c, N) + pow(d, N);
        /*
        printf("%d\n", i);
        printf("%d\n", a);
        printf("%d\n", b);
        printf("%d\n", c);
        printf("%d\n", d);
        printf("%d\n", e);
        */
        if (e == i) {
            printf("%d\n", i);
        }
    }
}

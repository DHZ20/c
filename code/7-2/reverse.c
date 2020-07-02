/*
 * ============================================================================
 *
 *       Filename:  reverse.c
 *
 *    Description:  数组逆序
 *
 *        Version:  1.0
 *        Created:  07/02/2020 11:15:17 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lin chuan , linch1982@gmail.com
 *   Organization:  
 *
 * ============================================================================
 */
#include <stdio.h>

void reverse(int a[], int n);
void printArray(int a[], int n);

int main() {
    int a[10];
    for (int i = 0; i < 10; i++)
        a[i] = i;

    printArray(a, 10);

    reverse(a+2, 3);

    printArray(a, 10);

    return 0;
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%4d", a[i]);
    printf("\n");
}

void reverse(int a[], int n) {
    for (int i = 0; i <= n / 2; i++) {
        int temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
}

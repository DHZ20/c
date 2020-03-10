/* bubble sort */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "bubble.h"
#include "print_array.h"

#define SIZE 50
void print_array(int a[], int n);

int main() {
    int x[SIZE];

    // 初始化随机数生成器
    time_t t;
    srand((unsigned) time(&t));
    // 通过rand函数初始化数组x
    for (int i = 0; i < SIZE; i++) {
        x[i] = rand() % SIZE;
    }

    print_array(x, SIZE);

    bubble(x, SIZE);

    print_array(x, SIZE);
}



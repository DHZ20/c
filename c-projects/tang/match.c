#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

#define LEN 4 

void sort(int *a, int size);
void merge_sort(int *a, int l, int r);
void swap(int* a, int i, int j);



int match(int *a, int size);

int main(void) {
    srand(time(NULL));
    int a[LEN] = {10, 97, 4, 10};
    /*
    for (int i = 0; i < LEN; i++) {
        a[i] = rand() % 100;
    }
    */

    for (int i = 0; i < LEN; i++) {
        printf("%4d", a[i]);
    }
    printf("\n");

    merge_sort(a, 0, LEN-1);

    for (int i = 0; i < LEN; i++) {
        printf("%4d", a[i]);
    }
    printf("\n");
    return 0;
}

void swap(int* a, int i, int j) {
    int t = a[i];
    a[i] = a[j];
    a[j] = t;
}

void merge_sort(int *a, int l, int r){
    if (l >= r) {
        return;
    }
    // 随便选一个数作为中位数
    int mid = a[(l + r) >> 1];
    int i = l;
    int j = r;
    while (i < j) {
        while(a[i] < mid)
            i++;
        while (a[j] > mid)
            j--;
        swap(a, i, j);
    }
    merge_sort(a, l, i-1);
    merge_sort(a, j+1, r);
    // 从左开始,找到一个比这个数大的

    // 从右开始找到一个比这个数小的
    // 两个交换
    // 直到左和右碰头
}

int find(int *a, char *c, int n, int size);

int find(int *a, char *c, int n, int size) {
    if (c[n] == 1)
        return 1;
    for (int i = n+1; i < size; i++) {
        if (c[i] == 1)
            continue;
        if (a[n] << 1 == a[i]) {
            c[i] = 1;
            return 1;
        }
    }
    return 0;
}

int match(int *a, int size) {
    merge_sort(a, 0, size-1);
    char count[size];
    memset(count, 0, sizeof(count));
    for(int i = 0; i < size; i++) {
        if (count[i] == 1)
            return 1;
        if (!find(a, count, i, size))
            return 0;
    }
    return 1;
}
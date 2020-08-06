//
//  main.c
//  28-数组-选择排序
//
//  Created by 半圆 on 2020/8/6.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%4d", a[i]);
    printf("\n");
}

void find_min_swap(int a[], int n) {
    // 找最小的下标
    int iMin = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[iMin]) {
            iMin = i;
        }
    }
    // 最小的元素和0号元素交换
    if (iMin != 0) {
        int temp = a[iMin];
        a[iMin] = a[0];
        a[0] = temp;
    }
}

int main(int argc, const char * argv[]) {
    // 构造一个数组
    int size = 10;
    int a[size];
    srand((unsigned int)time(NULL));
    for (int i = 0; i < size; i++) {
        a[i] = rand() % 100;
    }
    printArray(a, size);
    
    for (int i = 0; i < size-1; i++) {
        find_min_swap(a + i, size - i);
        printArray(a, size);
    }
    
    /*
    find_min_swap(a, size);
    printArray(a, size);
    find_min_swap(a + 1, size - 1);
    printArray(a, size);
    find_min_swap(a + 2, size - 2);
    printArray(a, size);
    find_min_swap(a + 3, size - 3);
    printArray(a, size);
     */

    return 0;
}

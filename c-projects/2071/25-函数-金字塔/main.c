//
//  main.c
//  25-函数-金字塔
//
//  Created by 半圆 on 2020/8/4.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>

void pyramid(int n){
    int i;
    for (i = 1; i <= n; i++) {
        int k;
        // 打印每一行的空格(n-i)
        for (k = 0; k < n-i; k++) {
            printf(" ");
        }
        // 打印每一行的数字(i)
        for (k = 0; k < i; k++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}


int main(int argc, const char * argv[]) {
    pyramid(9);
    return 0;
}

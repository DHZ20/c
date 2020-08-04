//
//  main.c
//  22-素数表
//
//  Created by 半圆 on 2020/8/4.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    int j;
    int isPrime = 1;
    
    if (n == 1)
        return false;
    
    for (j = 2; j <= n / 2; j++) {
        if (n % j == 0) {
            isPrime = 0;
            break;
        }
    }
    
    if (isPrime == 1) {
        // 是素数
        return true;
    } else {
        // 不是素数
        return false;
    }
}

int main(int argc, const char * argv[]) {
    // 从1到100, 打印出素数
    int i;
    int count = 0;
    for (i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            printf("%4d", i);
            count++;
            if (count % 10 == 0) {
                printf("\n");
            }
        }
    }
    
    printf("\n");
    return 0;
}

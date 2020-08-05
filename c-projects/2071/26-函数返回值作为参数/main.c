//
//  main.c
//  26-函数返回值作为参数
//
//  Created by 半圆 on 2020/8/5.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int sqr(int x) {
    return x*x;
}

int pow4(int x) {
    return sqr(sqr(x));
}

int sumup(int n) {
    int i;
    int sum = 0;
    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }
    return sum;
}

void alert(int n) {
    while(n-- > 0) {
        printf("%d\n", n);
    }
    for (int i = 0; i < n; i++) {
        printf("%c", '\a');
        sleep(1);
        printf("*\n");
    }
}


int main(int argc, const char * argv[]) {
    int a = 128 + 0x1100;
    // 1000 0000
    char c;
    c = a;
    // 010 000 000
    printf("%c\n", c);
    return 0;
}

//
//  main.c
//  23-函数-even
//
//  Created by 半圆 on 2020/8/4.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>


int even(int n) {
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

int main(int argc, const char * argv[]) {
    int x;
    scanf("%d", &x);
    if (even(x) == 1)
        printf("%d是一个偶数\n", x);
    else
        printf("%d是一个奇数\n", x);
    return 0;
}


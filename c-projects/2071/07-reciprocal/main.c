//
//  main.c
//  07-reciprocal
//
//  Created by 半圆 on 2020/7/31.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>
#include <math.h>

float f(int x) {
    float r;
    if (x == 0) {
        r = 0;
//        return 0;
    } else {
//        return 1.0 / x;
        r = 1.0/x;
    }
    return r;
}

int main(int argc, const char * argv[]) {
    int x;
    scanf("%d", &x);
    float r = f(x);
    printf("%d的倒数是%f\n", x, r);
    return 0;
}

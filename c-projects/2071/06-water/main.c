//
//  main.c
//  06-water
//
//  Created by 半圆 on 2020/7/31.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>

float f(float x) {
    float cost;
    if (x <= 15) {
        //cost = 4 / 3 * x;
        //cost = 4.0/3 * x;
        cost = 4 * x / 3;
    } else {
        cost = 2.5*x - 10.5;
    }
    return cost;
}


int main(int argc, const char * argv[]) {
    float x;
    scanf("%f", &x);
    if (x < 0) {
        printf("用水量不能是负数\n");
        return -1;
    }
    
    float cost;
    cost = f(x);
    printf("%.2f吨的水费是%.2f元\n", x, cost);
    return 0;
}

//
//  main.c
//  24-函数-pi-error
//
//  Created by 半圆 on 2020/8/4.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>
#include <math.h>

double pi(double e) {
    // 计算最后一项绝对值小于e的pi
    int flag = 1;
    double item = 1.0;
    int fenmu = 1;
    double sum = 0;
    while(fabs(item) >= e) {
        sum = sum + item;
        fenmu = fenmu + 2;
        flag = -flag;
        item = 1.0 / fenmu * flag;
    }
    sum = sum + item;
    return sum * 4;
}


int main(int argc, const char * argv[]) {
    double e;
    scanf("%lf", &e);
    printf("%.8lf\n", pi(e));
    return 0;
}

//
//  main.c
//  17-pi-while
//
//  Created by 半圆 on 2020/8/3.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double item = 1.0;
    double sum = 0;
    int flag = 1;
    int fenmu = 1;
    while (fabs(item) >= 0.000001) {
        sum = sum + item;
        // 计算下一项的值
        flag = -flag;
        fenmu = fenmu + 2;
        item = flag * (1.0 / fenmu);
    }
    sum = sum + item;
    printf("pi is %.8lf\n", sum * 4);
    return 0;
}

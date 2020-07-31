//
//  main.c
//  08-money
//
//  Created by 半圆 on 2020/7/31.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    float sum, money, year, rate;
    scanf("%f%f%f", &money, &year, &rate);
    sum = money * pow((1 + rate), year);
    printf("sum is %f\n", sum);
    return 0;
}

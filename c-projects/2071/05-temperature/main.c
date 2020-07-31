//
//  main.c
//  05-temperature
//
//  Created by 半圆 on 2020/7/31.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int f = 100;
    int c;
    
    // 整数除法得到结果是整数
    c = 5 / 9.0 * (f - 32);

    // 占位和后面的变量个数需要匹配
    printf("%d摄氏对应%d华氏\n", f, c);
    
    printf("pi is %f\n", 3.14159);
    return 0;
}

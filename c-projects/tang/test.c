//
//  main.c
//  1st-c-prj
//
//  Created by 半圆 on 2020/3/26.
//  Copyright © 2020 半圆. All rights reserved.
//
#if 1
#include <stdio.h>          /* 编译预处理命令 */
int factorial( int n );
int main(void)              /* 主函数，C语言程序开始执行的地方 */
{                           /* 函数体开始*/

    for (int i = 0; i <= 35; i++) {
        int fac = factorial(i);
        printf("%3d 的阶乘是 0x%08x %12d %12u\n", i, fac, fac, fac);
    }

    return 0;            /* 返回语句 */
}                        /* 函数体结束*/


/* 计算 n! 的函数 */
int factorial( int n )            /* 函数头 */
{                                 /* 函数体开始*/
    int i;                       /* 定义变量 i */
    int fact = 1;                /* 定义变量 fact */
    for(i = 1; i <= n; i++)      /* 循环 */
        fact = fact * i;      /* 乘法 */
    return fact;                /* 返回结果 */
}                                /* 函数体结束*/
#endif

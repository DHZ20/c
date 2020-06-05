/**
 * @author      : banyuan (linch1982@gmail.com)
 * @file        : p10
 * @created     : Wednesday Feb 19, 2020 14:27:39 CST
 * 编写如下函数，实现与库函数atoi、atol、atof相同的功能。
 */

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>

int strtoi(const char* pstr) {
    int num = 0;
    // true 表示整数
    char symbol = 1;
    if (*pstr == 0) {
        // 空字符串
        return INT_MIN;
    }

    if (*pstr == '-') {
        // 负数
        symbol = 0;
        pstr++;
    }
        
    while( *pstr != '\0' ) {
        if (*pstr < '0' || *pstr > '9') {
            // 非法字符 
            return INT_MIN;
        }
        num = num*10 + *pstr - '0';
        pstr++;
    }
    return (symbol?num:-num);
}


double str2f(const char* pstr) {
    double int_part = 0; // 整数部分的值
    double float_part = 0; // 小数部分的值
    // 1 表示正数
    char symbol = 1;
    char point = 0; //0->整数， 1->小数
    char point_position = 0;

    if (*pstr == 0) {
        // 空字符串
        printf("invalid input!!\n");
        return INT_MIN;
    }

    if (*pstr == '-') {
        // 负数
        symbol = 0;
        pstr++;
    }
        
    while( *pstr != '\0' ) {
        if ((*pstr < '0' || *pstr > '9') && *pstr != '.') {
            // 非法字符 
            printf("invalid input!!\n");
            return INT_MIN;
        }
        if (*pstr == '.') {
            // 如果遇到小数点，则切换到小数部分
            if (point == 1) {
                printf("有多个小数点出现!!\n");
                return INT_MIN;
            }
            point = 1;
            point_position = 1;
        } else {
            // 整数和小数的处理
            if (point == 0) {
                // 整数
                int_part = int_part * 10 + *pstr - '0';
            } else {
                // 小数
                float_part = float_part + ( (*pstr - '0') / pow(10, point_position) );
                point_position++;
            }
        }
        pstr++;
    }
    double total = int_part + float_part; 
    return (symbol?total:-total);
}

int main(int argc, char** argv) {
    double f = str2f(argv[1]);
    printf(" you input %lf\n", f);
    return 0;
}


//
//  main.c
//  16-switch-operator
//
//  Created by 半圆 on 2020/8/3.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("请输入表达式\n");
    double value1, value2, result;
    char op;
    scanf("%lf%c%lf", &value1, &op, &value2);
    if (op == '+') {
        result = value1 + value2;
    } else if (op == '-') {
        result = value1 - value2;
    } else if (op == '*') {
        result = value1 * value2;
    } else if (op == '/') {
        result = value1 / value2;
    } else {
        printf("非法的运算符：%c\n", op);
        return -1;
    }
    
    /*
    switch (op) {
        case '+':
            result = value1 + value2;
            break;
        case '-':
            result = value1 - value2;
            break;
        case '*':
            result = value1 * value2;
            break;
        case '/':
            result = value1 / value2;
            break;
        default:
            printf("非法的运算符：%c\n", op);
            //break;
            return -1;
    }
     */
    printf("%lf\n", result);
    return 0;
}

//
//  main.c
//  33-字符串-常用操作
//
//  Created by 半圆 on 2020/8/6.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>

int stringLen(char s[]) {
    int n = 0;
    while(s[n] != 0)
        n++;
    return n;
}

int main(int argc, const char * argv[]) {
    char s[100];
    scanf("%s", s);
    printf("len is %d\n", stringLen(s));
    return 0;
}

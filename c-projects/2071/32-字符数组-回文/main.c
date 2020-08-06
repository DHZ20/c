//
//  main.c
//  32-字符数组-回文
//
//  Created by 半圆 on 2020/8/6.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char s[10];
    scanf("%s", s);
    
    // 求字符串的长度
    int n = 0;
    while(s[n] != 0)
        n++;
    printf("%d\n", n);
    
    // 判断是否回文
    // 123321  n->6
    // 1234321 n 7
    // s[0]   s[n-1]
    // s[1]   s[n-2]
    // s[i]   s[n-1-i]
    // s[2]   s[n-1-2] (n / 2 - 1)
    for (int i = 0; i < n/2; i++) {
        if (s[i] != s[n-1-i]) {
            // 不是回文
            printf("%s不是回文\n", s);
            return 0;
        }
    }
    printf("%s是回文\n", s);
    return 0;
}

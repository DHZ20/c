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
    printf("%s\n", s);
    return 0;
}

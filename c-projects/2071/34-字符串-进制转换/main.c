//
//  main.c
//  34-字符串-进制转换
//
//  Created by 半圆 on 2020/8/6.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char s[80];
    // 输入
    scanf("%s", s);
    // 过滤掉不是16进制符号的字符
    // akkc -> ac
    // i = 0: a -> a
    // i = 1: k i++
    // i = 2: k i++
    // i = 3: c c-> s[1]
    // 对于i，如果s[i]不是16进制，则处理下一个
    // 如果是16进制？？
    // i原始字符串下标，j新的下标
    int i = 0;
    int j = 0;
    // akkc -> ac
    while(s[i] != '\0') {
        if ((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'f')) {
            s[j] = s[i];
            j++;
        }
        i++;
    }
    s[j] = '\0';
    
    printf("%s\n", s);
    
    // 将新的s转成10进制数字
    i = 0;
    int sum = 0;
    while(s[i] != '\0') {
        int t;
        if (s[i] >= '0' && s[i] <= '9')
            t = s[i] - '0';
        else // if (s[i] >= 'a' && s[i] <= 'f')
            t = s[i] - 'a' + 10;
        sum = sum*16 + t; //??;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}

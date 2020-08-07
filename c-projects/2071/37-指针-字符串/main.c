//
//  main.c
//  37-指针-字符串
//
//  Created by 半圆 on 2020/8/7.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>

// void encrypt(char s[]) {
void myEncrypt(char *s) {
    // 遍历每个字符，修改它
    while(*s != '\0') {
        // *s = *s + 1;
        // s[0]
        *s = (*s == 'z')? 'a': (*s + 1);
        s++;
        // s = s + 1;
    }
    /*
    int i = 0;
    while(s[i] != '\0') {
        s[i] = s[i] + 1;
        i++;
    }
     */
}

int main(int argc, const char * argv[]) {
    char s[100];
    scanf("%s", s);
    myEncrypt(s);
    printf("%s", s);
    printf("\n");
    return 0;
}

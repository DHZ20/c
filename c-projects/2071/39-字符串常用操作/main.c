//
//  main.c
//  39-字符串常用操作
//
//  Created by 半圆 on 2020/8/10.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int myStrlen(char* s) {
    int len = 0;
    
    while(*s != 0) {
        len++;
        s++;
    }

    return len;
}

// 将s的内容copy到t里面
void myStrcpy(char* s, char* t) {
    while(*s != 0) {
        *t = *s;
        t++;
        s++;
    }
    *t = 0;
}

// 将t字符串拼接在s后面
void myStrcat(char* s, char* t) {
    // 找到s结束的地方
    while(*s != 0) {
        s++;
    }
    // copy
    myStrcpy(t, s);
}

// 比较s和t的大小（ASCII表的数值）
// return   1: s > t
//          0: s == t
//         -1: s < t
int myStrcmp(char* s, char* t) {
    while (1) {
        if (*s == *t) {
            if (*s == 0)
                return 0;
            s++;
            t++;
        } else {
            return *s - *t;
        }
        /*
        if (*s > *t)
            return 1;
        else if (*s == *t) {
            if (*s == 0)
                return 0;
            s++;
            t++;
            continue;
        } else {
            return -1;
        }
         */
    }
}


int main(int argc, const char * argv[]) {
    char s[100] = "aaaabbbbccccdddd";
    printf("%d\n", myStrlen(s));
    char* t = malloc(100 * sizeof(char));
//    char t[100];
    myStrcpy(s, t);
    printf("%s\n", t);
    myStrcat(s, "abcd");
    printf("%s\n", s);
    printf("%d\n", myStrcmp("", "abc"));
    printf("%d\n", myStrcmp("", ""));
    printf("%d\n", myStrcmp("abc", "abc"));
    printf("%d\n", myStrcmp("abd", "abc"));
    strtol(<#const char *__str#>, <#char **__endptr#>, <#int __base#>)
    return 0;
}

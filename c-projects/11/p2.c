/* 在代码清单11.4中，各数组的字符串个数3是作为常量嵌在程序(for语句的控制表达式)中的。请编写一段程序，将其改写为通过计算求出。*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char a[][5] = {"LISP", "c", "Ada"};
    char *p[] = {"PAULabc", "X", "MAC"};

    for (int i = 0; i < 3; i++) {
        printf("a[%d] = \"%s\"\n", i, a[i]);
    }

    for (int i = 0; i < 3; i++) {
        printf("p[%d] = \"%s\"\n", i, p[i]);
    }

    // 获取字符串数组的字符串个数
    printf("%lu\n", sizeof(a) / sizeof(a[0]));
    printf("size of a[0] = %lu\n", sizeof(a[0]));
    printf("size of a[1] = %lu\n", sizeof(a[1]));
    printf("size of a[2] = %lu\n", sizeof(a[2]));
    printf("%lu\n", sizeof(p) / sizeof(p[0]));
    printf("size of p[0] = %lu\n", sizeof(p[0]));
    printf("size of p[1] = %lu\n", sizeof(p[1]));
    printf("size of p[2] = %lu\n", sizeof(p[2]));
    return 0;
}


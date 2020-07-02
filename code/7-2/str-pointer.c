/*
 * ============================================================================
 *
 *       Filename:  str-pointer.c
 *
 *    Description:  字符指针的示例
 *
 *        Version:  1.0
 *        Created:  07/02/2020 02:55:06 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lin chuan , linch1982@gmail.com
 *   Organization:  
 *
 * ============================================================================
 */
#include <stdlib.h>
#include <stdio.h>

void my_strcpy(char* s, char* t);
int my_strcmp(char* s, char* t);
void my_strcat(char* s, char* t);
unsigned int my_strlen(char* s);

int main() {
    char t[20] = "abcd";
    char s[20] = "1234";

    printf("%d\n", my_strcmp(t, s));

    my_strcpy(s, t);
    printf("%s\n", t);

    my_strcat("ZZZZ", s);
    printf("%s\n", s);
    printf("len of s is %d\n", my_strlen(s));
    return 0;
}

// 将s拷贝到t
void my_strcpy(char* s, char* t) {
    do {
        *t = *s;
        t++;
        s++;
    } while(*s != 0);
}

int my_strcmp(char* s, char* t) {
    while (*s == *t) {
        if (*s == 0)
            return 0;
        s++;
        t++;
    }
    return *s - *t;
}

// 将s粘贴到t的后面
void my_strcat(char* s, char* t) {
    while (*t)
        t++;
    my_strcpy(s, t);
}

unsigned int my_strlen(char* s) {
    int n = 0;
    while (*s) {
        n++;
        s++;
    }
    return n;
}

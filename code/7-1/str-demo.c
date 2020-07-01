/*
 * ============================================================================
 *
 *       Filename:  strr-demo.c
 *
 *    Description:  字符串示例
 *
 *        Version:  1.0
 *        Created:  07/01/2020 01:32:35 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lin chuan , linch1982@gmail.com
 *   Organization:  
 *
 * ============================================================================
 */
#include <stdio.h>

unsigned int my_strlen(char s[]);
void my_strcpy(char s[], char t[]);
int my_strcmp(char a[], char b[]);
void my_strcat(char a[], char b[]);

int main() {
    char a[20] = "happy";
    // 1. 计算字符串长度
    unsigned int len = my_strlen(a);
    printf("len of a is %d\n", len);

    // 2. 字符串拷贝
    char b[20];
    my_strcpy(a, b);
    printf("b is :%s\n", b);

    // 3. 字符串比较
    printf("%d\n", my_strcmp(a, "happa"));

    // 4. 字符串追加
    // b -> a : a+b
    // a: abc b: def a: abcdef
    my_strcat(a, "1234");
    printf("%s\n", a);
    
    return 0;
}

void my_strcat(char a[], char b[]) {
    // 1. 找到a里面的0的位置
    int i = 0;
    while (a[i] != 0) {
        i++;
    }
    // 2. 把b复制到a里面0开始的地方
    // b[0] -> a[i]; b[1] -> a[i+1]
    int j = 0;
    while (b[j] != 0) {
        a[i+j] = b[j];
        j++;
    }
    a[i+j] = 0;
}

/* 
 * return: 0 相等
 *         1: a > b
 *         -1: a < b
 *         1: a > b
 * */
int my_strcmp(char a[], char b[]) {
    int i = 0;
    while(a[i] == b[i]) {
        if (a[i] == 0)
            return 0;
        i++;
    }
    if (a[i] > b[i]) {
        return 1;
    } else
        return -1;
}

void my_strcpy(char s[], char t[]) {

    /* 方式1: for
    for (int i = 0; i < my_strlen(s)+1; i++)
        t[i] = s[i];
    */

    /* 方式2: while
    int i = 0;
    while (s[i] != 0) {
        t[i] = s[i];
        i++;
    }
    t[i] = 0; 
    */

    /* 少赋值了最后一个0 */
    /*
    int i = 0;
    do {
        t[i] = s[i];
        i++;
    } while (s[i] != 0);
    */

    /* 方式3： do while
    int i = -1;
    do {
        i++;
        t[i] = s[i];
    } while (s[i] != 0);
    */

    /* 方式4 */
    int i = 0;
    while ((t[i] = s[i]) != 0)
        i++;

    printf("%d\n", i);
}

unsigned int my_strlen(char s[]) {
    // 计算输入的s中第一个0之前有多少个字符
    int n = 0;
    while (s[n] != 0) {
        n++;
    }
    return n;
}

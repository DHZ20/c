/*
 * ============================================================================
 *
 *       Filename:  stoi.c
 *
 *    Description:  将输入的字符串中16进制数字提取出来，并计算其10进制的值
 *
 *        Version:  1.0
 *        Created:  07/01/2020 10:02:26 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lin chuan , linch1982@gmail.com
 *   Organization:  
 *
 * ============================================================================
 */
#include <stdio.h>
#include <math.h>

int char2int(char c);
int isHex(char c);



int main() {
    char s[80];
    scanf("%s", s);

    // 将s中的合法16进制字符提取出来， 放到new中
    char new[80];

    int i = 0;
    int n = 0;
    while(s[i] != 0) {
        if (isHex(s[i])) {
            new[n] = s[i];
            n++;
        }
        i++;
    }
    new[n] = 0;
    printf("new is %s\n", new);
    // 将new里面的字符串转成10进制数字
    int value = 0;
    for (int j = 0; j < n; j++) {
        // value = value + char2int(new[j]) * pow(16, n-j-1);
        // value = value * 16 + char2int(new[j]);
        value = (value << 4) + char2int(new[j]);
    }
    printf("%d\n", value);
    return 0;
}

int char2int(char c) {
    if (c >= '0' && c <= '9')
        return c-'0';
    else if (c >= 'a' && c <= 'f')
        return 10 + c - 'a';
    else 
        return 10 + c - 'A';
}

int isHex(char c) {
    if ((c >= '0' && c <= '9') 
        || (c >= 'a' && c <= 'f') 
        || (c >= 'A' && c <= 'F')) {
        return 1;
    }
    else {
        return 0;
    }
}

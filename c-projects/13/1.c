/* 先以只读模式"r"打开名为"abc"的文件，然后将它关闭。
 * 当文件打开失败，fopen函数返回NULL时，会显示“无法打开文件"abc"。否则则证明文件可以正常打开，所以显示“成功打开文件"abc"，并关闭文件。
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fp = fopen("abc", "r");
    if (fp == NULL) {
        printf("无法打开文件\"abc\"\n");
        return -1;
    }
    printf("成功打开文件\"abc\"\n");
    fclose(fp);
    return 0;
}


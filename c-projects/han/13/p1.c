/* 先以只读模式"r"打开名为"abc"的文件，然后将它关闭。
 * 当文件打开失败，fopen函数返回NULL时，会显示“无法打开文件"abc"。否则则证明文件可以正常打开，所以显示“成功打开文件"abc"，并关闭文件。
 */

/* 代码清单13-1中的程序只能打开名为"abc"的文件。请将程序改为从键盘读入文件名，如果存在该名称的文件，就显示“该文件存在。”，否则就显示“该文件不存在。”。
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    /* argc -> 参数的个数 >= 1 */
    /* argv[0] -> 这条命令的名字 */
    if (argc != 2) {
        printf("Usage: %s <filename> !\n", argv[0]);
        return -2;
    }

    FILE* fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("该文件不存在。\n");
        return -1;
    }
    printf("该文件存在。\n");
    fclose(fp);
    return 0;
}


/* 编写程序，从键盘读入文件名，消去该名称的文件的内容。
 * 以只写模式打开文件即可(用只写模式"w"打开文件后，文件的内容就被消除了)。
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Usage: %s <filename> !\n", argv[0]);
        return -2;
    }

    FILE* fp = fopen(argv[1], "w");
    if (fp == NULL) {
        printf("该文件无法打开。\n");
        return -1;
    }
    printf("该文件内容已被清除。\n");
    fclose(fp);
    return 0;
}


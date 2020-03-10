/* 请采用代码清单13-2的文件写入形式，编写一个从键盘读取姓名、身高和体重,并将这些数据写入文件的程序。
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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


    // 开始从终端输入姓名，身高和体重
    char name[32];
    double height;
    double weight;
    char c[10];
    while (1) {
        printf("请输入姓名：");
        scanf("%s", name);
        printf("请输入身高：");
        scanf("%lf", &height);
        printf("请输入体重：");
        scanf("%lf", &weight);

        fprintf(fp, "%s\t%.0lf\t%.1lf\n", name, height, weight);

        printf("退出请按q加回车，其他键加回车继续\n");
        scanf("%s", c);
        if ('q' == c[0]) {
            break;
        }
    }

    fclose(fp);
    return 0;
}


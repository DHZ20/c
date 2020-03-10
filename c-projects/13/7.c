/* 文件的复制
 * 程序首先会询问需要复制的“原文件”和“目标文件”的文件名，并将它读入字符串sname和dname。
 * 然后以只读模式打开原文件，并将指向与该文件相关联的流的指针赋给sfp。
 * 如果文件打开成功，就以只写模式打开目标文件，并将指向该文件相关联的流的指针赋给dfp。
 * 如果两个文件都打开成功，就进行复制
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    char sname[FILENAME_MAX];
    char dname[FILENAME_MAX];
    printf("输入源文件名：");
    scanf("%s", sname);
    FILE* sfp = fopen(sname, "r");
    if (NULL == sfp) {
        printf("源文件打开失败\n");
        return -1;
    }

    printf("输入目标文件名：");
    scanf("%s", dname);
    FILE* dfp = fopen(dname, "w");
    if (NULL == dfp) {
        printf("目标文件打开失败\n");
        return -1;
    }


    // 复制
    char c;
    while( EOF != (c = fgetc(sfp)) )
    {
        fputc(c, dfp);
    }
    
    fclose(sfp);
    fclose(dfp);
    return 0;
}

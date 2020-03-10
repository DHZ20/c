/* 请参考代码清单13-7编写一个程序，将所有英文小写字母转换为大写字母的同时执行复制操作。
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
        if (c >= 'a' && c <= 'z')
        {
            c -= 'a' - 'A';
        }
        fputc(c, dfp);
    }
    
    fclose(sfp);
    fclose(dfp);
    return 0;
}

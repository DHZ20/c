/* 程序首先提示输入文件名，将文件名读入字符串fname。如果文件打开失败，就会显示“文件打开失败。”，这和之前的程序相同。
 * 打开文件后在终端上输出该文件的内容。
 */
#include <stdio.h>
#include <stdlib.h>

#ifdef FILENAME_MAX
#undef FILENAME_MAX
#endif

#define FILENAME_MAX 1024

int main() {
    char fname[FILENAME_MAX];
    printf("输入文件名：");
    scanf("%s", fname);
    FILE* fp = fopen(fname, "r");
    if (NULL == fp) {
        printf("文件打开失败\n");
        return -1;
    }

    char c;

    while( EOF != (c = fgetc(fp)) )
    {
        putchar(c);
    }
    
    fclose(fp);
    return 0;
}

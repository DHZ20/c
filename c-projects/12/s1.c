/**
 * @author      : banyuan (linch1982@gmail.com)
 * @file        : s1
 * @created     : Tuesday Feb 18, 2020 14:40:39 CST
 * write to file
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    char* s = "Hello World";
    FILE* fp;
    if (NULL == (fp = fopen("../f1.txt", "w"))) {
        printf("open file error!\n");
        return -1;
    }

    fprintf(fp, s);
    fclose(fp);
    return 0;
}

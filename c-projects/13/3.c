/* 将当前时间输出到dt_dat文件并保存 */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    // open file
    FILE *fp = fopen("dt_dat", "w");
    if (NULL == fp) {
        printf("can not open file dt_dat\n");
        return -1;
    }

    // get current time
    time_t t;
    time(&t);
    struct tm* now = localtime(&t);
    // 注意：localtime获取到的结构体里面，year是从1900开始，month是用0开始
    fprintf(fp, "%d %d %d %d %d %d\n", 1900 + now->tm_year, 1 + now->tm_mon, now->tm_mday, now->tm_hour, now->tm_min, now->tm_sec);

    fclose(fp);
    return 0;
}

/* 如果程序是第一次运行，就会显示表明是第一次运行的消息。如果程序运行了两次以上,就会显示上一次运行时的日期和时间。*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define DATE_FILE "datetime.dat"

void get_data(void);
void put_data(void);

int main() {
    get_data();
    put_data();
    return 0;
}

void get_data() {
    FILE* fp = fopen(DATE_FILE, "r");
    if (NULL == fp) {
        printf("程序第一次运行。\n");
        return;
    }
    int year, month, day, hour, min, sec;
    fscanf(fp, "%d %d %d %d %d %d\n", &year, &month, &day, &hour, &min, &sec);
    printf("上一次运行是在%d年%d月%d日%d时%d分%d秒。\n", year, month, day, hour, min, sec);
    fclose(fp);
    return;
}

void put_data() {
    FILE* fp = fopen(DATE_FILE, "w");
    if (NULL == fp) {
        printf("打开文件失败\n");
        return;
    }
    // get current time
    time_t t;
    time(&t);
    struct tm* now = localtime(&t);
    // 注意：localtime获取到的结构体里面，year是从1900开始，month是用0开始
    fprintf(fp, "%d %d %d %d %d %d\n", 1900 + now->tm_year, 1 + now->tm_mon, now->tm_mday, now->tm_hour, now->tm_min, now->tm_sec);

    fclose(fp);
}

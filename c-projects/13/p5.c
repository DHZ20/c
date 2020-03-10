/* 在代码清单13-4的程序中加上表示当前“心情”的字符串。即在显示上一次的运行时间(和上一次的心情)之后提示输入“当前的心情:”，从键盘读入字符串再写入文件。例如，如果输入“极好!!”，那么程序在下一次运行时就应显示“上一次运行是在XXXX年XX月XX日XX时XX分XX秒，心情极好!!”。
 */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define DATE_FILE "datetime.dat"
#define MOOD_LEN 100

void get_data(void);
void put_data(char *);

int main() {
    char mood[MOOD_LEN];
    get_data();

    printf("当前的心情：");
    scanf("%s", mood);

    put_data(mood);
    return 0;
}

void get_data() {
    FILE* fp = fopen(DATE_FILE, "r");
    if (NULL == fp) {
        printf("程序第一次运行。\n");
        return;
    }

    int year, month, day, hour, min, sec;
    char mood[100];
    fscanf(fp, "%d %d %d %d %d %d\n", &year, &month, &day, &hour, &min, &sec);
    fscanf(fp, "%s\n", mood);
    printf("上一次运行是在%d年%d月%d日%d时%d分%d秒，心情%s\n", year, month, day, hour, min, sec, mood);
    fclose(fp);
    return;
}

void put_data(char *mood) {
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
    fprintf(fp, "%s\n", mood);
    fclose(fp);
}

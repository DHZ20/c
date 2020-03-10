/* 读取hw.dat文件，计算平均身高和体重并输出 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("hw.dat", "r");
    if (fp == NULL) {
        printf("hw.dat file not exist.\n");
        return -1;
    }

    char name[32];
    double height, weight, h_sum=0, w_sum=0;
    int count = 0;

    while(3 == fscanf(fp, "%s %lf %lf\n", name, &height, &weight)) {
        printf("%s\t%lf\t%lf\n", name, height, weight);
        h_sum += height;
        w_sum += weight;
        count++;
    }

    printf("avg weight = %lf, avg height = %lf\n", w_sum / count, h_sum / count);

    fclose(fp);
    return 0;
}

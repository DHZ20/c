/* 读取hw.dat文件，计算平均身高和体重并输出 */
/* 改写代码清单13-2中的程序，将从文件读入的个人信息按身高排序后显示。
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char name[32];
    double height;
    double weight;
} Person;

void sort_h(Person a[], unsigned int n);

int main() {
    FILE *fp = fopen("hw.dat", "r");
    if (fp == NULL) {
        printf("hw.dat file not exist.\n");
        return -1;
    }

    Person person[10];
    char name[32];
    double height, weight, h_sum=0, w_sum=0;
    int count = 0;

    // 从文件输入并保存数据到数组person
    while(3 == fscanf(fp, "%s %lf %lf\n", name, &height, &weight)) {
        strcpy(person[count].name, name);
        person[count].height = height;
        person[count].weight = weight;
        count++;
    }

    // 排序
    sort_h(person, count);

    // 打印排序后的结果
    for(int i = 0; i < count; i++) {
        printf("%s\t%lf\t%lf\n", person[i].name, person[i].height, person[i].weight);
    }

    printf("avg weight = %lf, avg height = %lf\n", w_sum / count, h_sum / count);

    fclose(fp);
    return 0;
}

void sort_h(Person a[], unsigned int n) {
    int i, j; 
    Person t;

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-1-i; j++) {
            if (a[j].height > a[j+1].height) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

}

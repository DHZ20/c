/**
 * @author      : banyuan (linch1982@gmail.com)
 * @file        : 5-12
 * @created     : Thursday Feb 13, 2020 14:14:40 CST
 */

/*
输入学生的分数并显示出分布情况
*/
#include <stdio.h>

#define NUMBER 80    /*人数上限*/

int find_max_of_arrays(int a[], int length_of_a);

int main(void)
{
    int i, j;
    int num;              /*实际的人数*/
    int tensu[NUMBER];    /*学生的分数*/
    int bunpu[11] = {0};  /*分布图*/

    printf("请输入学生人数：");
    do {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("请输入1-%d的数：", NUMBER);
    } while (num < 1 || num > NUMBER);
    
    printf("请输入%d人的分数。\n", num);

    for (i = 0; i < num; i++)
    {
        printf("%2d号:", i + 1);
        do {
            scanf("%d", &tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100)
                printf("请输入1-100的数：");
        } while (tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }

    // 1. 获取bunpu里面最大的一个元素的值是多少
    int max = find_max_of_arrays(bunpu, num);
    // 2. 遍历bunpu的每一个元素，如果该元素的值不小于最大的那个元素，则打印出来
    for (int i = 0; i < bunpu[max]; i++) {
        for (int j = 0; j <= 10; j++) {
            if (bunpu[j] >= bunpu[max] - i) {
                printf(" *");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}


/* 返回最大元素的下标 */
int find_max_of_arrays(int a[], int length_of_a) {
    int max = 0;
    for (int i = 1; i < length_of_a; i++) {
        if (a[i] > a[max]) {
            max = i;
        }
    }
    return max;
}
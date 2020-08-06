//
//  main.c
//  30-二维数组-转置
//
//  Created by 半圆 on 2020/8/6.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 5
#define COLUMN 5

int main(int argc, const char * argv[]) {
    srand((unsigned int)time(NULL));
    int a[ROW][COLUMN];
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUMN; j++) {
            a[i][j] = rand() % 100;
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < i; j++) {
            int t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
    }
    
    printf("\n");

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUMN; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

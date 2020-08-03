//
//  main.c
//  14-leap-year
//
//  Created by 半圆 on 2020/8/3.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int year;
    scanf("%d", &year);
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        printf("闰年\n");
    } else {
        printf("不是闰年\n");
    }
    return 0;
}

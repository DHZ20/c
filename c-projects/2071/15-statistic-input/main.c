//
//  main.c
//  15-statistic-input
//
//  Created by 半圆 on 2020/8/3.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 0;
    char ch;
    while (i < 10) {
        ch = getchar();
        putchar(ch);
        i++;
    }
    return 0;
}

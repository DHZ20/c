//
//  main.c
//  19-位数
//
//  Created by 半圆 on 2020/8/3.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    scanf("%d", &num);
    int count = 0;
    do {
        num = num / 10;
        count++;
    } while(num != 0);
    printf("%d\n", count);
    return 0;
}

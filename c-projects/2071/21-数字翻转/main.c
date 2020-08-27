//
//  main.c
//  21-数字翻转
//
//  Created by 半圆 on 2020/8/4.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x;
    scanf("%d", &x);
    /*
    if (x == 0) {
        printf("0");
    } else {
        while (x != 0) {
            // x % 10 -> 个位 -> 输出
            printf("%d", x % 10);
            // x = x / 10;
            x = x / 10;
        }
    }
     */
    int result = 0;
    do {
        printf("%d", x % 10);
        result = result * 10 + x % 10;
        x = x / 10;
    } while(x != 0);
    
    printf("\n");
    printf("result = %d\n", result);
    return 0;
}

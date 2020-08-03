//
//  main.c
//  20-素数
//
//  Created by 半圆 on 2020/8/3.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, m;
    scanf("%d", &m);
    for (i = 2; i <= m-1; i++) {
        if (m % i == 0) {
            // m能被i整除，则不是素数
            break;
        }
    }
    
    if (i == m) {
        // 并没有从for中break出来
        printf("%d是一个素数\n", m);
    } else {
        printf("%d不是一个素数\n", m);
    }
    
    
    return 0;
}

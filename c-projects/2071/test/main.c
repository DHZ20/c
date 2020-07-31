//
//  main.c
//  test
//
//  Created by 半圆 on 2020/7/31.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
#if 0
    int a = 3;
    int b = 2;
    if (a == b) {
        printf("True\n");
    } else {
        printf("False\n");
    }
#endif
    
    double a = 33.14;
    printf("%.1lf\n", a);
    printf("%4.1lf\n", a);
    printf("%06.1lf\n", a);
    
    return 0;
}

//
//  main.c
//  12-fabs
//
//  Created by 半圆 on 2020/8/3.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double x;
    
    scanf("%lf", &x);
    if (x < 0) {
        printf("%lf\n", -x);
    } else {
        printf("%lf\n", x);
    }
    
}

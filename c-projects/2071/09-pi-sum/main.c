//
//  main.c
//  09-pi-sum
//
//  Created by 半圆 on 2020/7/31.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>

double pi(int n) {
    double sum = 0;
    int i;
    double item;
    int flag = 1;
    for (i = 1; i <= n; i++) {
        item = flag * 1.0/(2*i -1);
        sum = sum + item;
        flag = -flag;
    }
    return sum * 4;
}


int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    printf("pi is %lf\n", pi(n));
    return 0;
}

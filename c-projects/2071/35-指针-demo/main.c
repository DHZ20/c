//
//  main.c
//  35-指针-demo
//
//  Created by 半圆 on 2020/8/7.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main(int argc, const char * argv[]) {
#if 0
    int x;
    x = 100;
    int* p;
    p = &x;
    
    printf("0x%lx\n", (unsigned long)p);
    printf("0x%lx\n", (unsigned long)&p);
    printf("0x%lx\n", (unsigned long)&x);
    
    printf("%d\n", *p);
    *p = 200;
    printf("%d\n", x);
#endif
    
    int a[10];
    printf("0x%lx\n", (unsigned long)a);
    printf("0x%lx\n", (unsigned long)&a[0]);
    printArray(a, 10);
    /*
    *a = 100;
    *(a+1) = 200;
    *(a+2) = *a + (*(a+1));
     */
    a[0] = 100;
    a[1] = 200;
    a[2] = a[0] + a[1];
    printArray(a, 10);
    
    printf("%ld\n", &a[4] - a);
    printf("%ld\n", (long)&a[4] - (long)a);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void add_one(int *x);

void swap(int *x, int *y);

int main() {
    // 变量、内存单元和地址之间是什么关系？

    printf("11111111111111111\n");

    int a = 100;
    printf("a\'address is 0x%0x\n", &a);
    printf("a is %d\n", a);

    int *p = &a;
    printf("p\'s address is 0x%0x\n", &p);
    printf("p is 0x%0x\n", p);
    printf("p\' size is %d\n", sizeof(p));
    printf("*p is %d\n", *p);
    printf("p + 1 is 0x%0x\n", p+1);

    char* c;
    printf("c is 0x%0x\n", c);
    printf("c\' size is %d\n", sizeof(c));

    // 指针作为函数参数的作用是什么？
    printf("22222222222222222\n");
    add_one(p);
    
    printf("a\'address is 0x%0x\n", &a);
    printf("a is %d\n", a);
    printf("p\'s address is 0x%0x\n", &p);
    printf("p is 0x%0x\n", p);
    printf("*p is %d\n", *p);

    // 如何使用指针实现函数调用返回多个值？
    printf("33333333333333333\n");
    int b = 200;
    swap(&a, &b);
    printf("a\'address is 0x%0x\n", &a);
    printf("a is %d\n", a);
    printf("b\'address is 0x%0x\n", &b);
    printf("b is %d\n", b);
}

void add_one(int *x) {
    (*x)++;
}

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}
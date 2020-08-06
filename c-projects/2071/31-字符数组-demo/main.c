//
//  main.c
//  31-字符数组-demo
//
//  Created by 半圆 on 2020/8/6.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("sizof abc is %lu\n", sizeof("abc"));
    
    char s[] = "abc";
    printf("sizeof s is %lu\n", sizeof(s));
    char s1[10] = "abc";
    printf("sizeof s1 is %lu\n", sizeof(s1));
    for(int i = 0; i < 10; i++) {
        printf("%4d", s1[i]);
    }
    printf("\n");

    s1[4] = 'd';
    
    for(int i = 0; i < 10; i++) {
        printf("%4d", s1[i]);
    }
    printf("\n");

    
    printf("%s\n", s1);
    
    return 0;
}

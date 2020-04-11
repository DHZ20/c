/*
 * ============================================================================
 *
 *       Filename:  eof.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/07/2020 01:00:24 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lin chuan , linch1982@gmail.com
 *   Organization:  
 *
 * ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int length;      //记录当前顺序表的长度
    int capacity;    //记录顺序表分配的存储容量
    int *head;       //顺序表指针变量
} MyList;

int main() {
    MyList a;
    a.head = malloc(100 * sizeof(int));
    a.capacity = 100;
    a.length = 0;
    
    while(
          scanf("%d", a.head + a.length)
          ) {
        a.length++;
#if 0
        if (a.length > 10)
            break;
#endif
    }
    for (int i = 0; i < a.length; i++) {
        printf("%5d", a.head[i]);
    }
    printf("\n");
    return 0;
}


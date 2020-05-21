/*
 * ============================================================================
 *
 *       Filename:  point.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/16/2020 09:50:14 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lin chuan , linch1982@gmail.com
 *   Organization:  
 *
 * ============================================================================
 */
#include <stdlib.h>
#include <stdio.h>

void add(int* a);

void add(int* a) {
    (*a)++;
}

int main() {
    int a = 10; 
    add(&a);
    printf("a = %d\n", a);
}

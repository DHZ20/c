/*
 * ============================================================================
 *
 *       Filename:  add.c
 *
 *    Description:  两数之和
 *
 *        Version:  1.0
 *        Created:  07/02/2020 03:29:57 PM
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

int* twoSum(int* returnSize);


int main() {
    int size;
    int *a;
    a = twoSum(&size);
    printf("size = %d\n", size);
    for (int i = 0; i < size; i++)
        printf("%3d", a[i]);
    printf("\n");
    return 0;
}

int* twoSum(int* returnSize){
    int a[3] = {1, 2, 3};
    *returnSize = 3;
    return a;
}

/*
 * ============================================================================
 *
 *       Filename:  rand.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/16/2020 01:43:28 PM
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


int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10-1; i++) {
        // 对于每个i，将i和它之后的某个元素交换位置
        // t -> [i, 9] -> 10-i 个随机数
        // rand() % 10 -> [0.. 9]
        // rand() % (10 -i) -> 0 .. 9-i
        // t = (rand() % (10 -i)) + i  -> i .. 9
        int t = (rand() % (10-i)) + i;
        if (t != i) {
            int temp = a[t];
            a[t] = a[i];
            a[i] = temp;
        }
    }


}

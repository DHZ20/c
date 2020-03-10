/* 
 * 编写一个程序，确认只要没有发生高位溢出，则
 *
 * 无符号整数位左移后的值等于其乘以2的指数幂后的值。
 * 无符号整数位右移后的值等于其除以2的指数幂后的值。
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    char s[100];
    unsigned int n;
    int shift;
    while(1) {
        printf("intput a number: ");
        scanf("%s", s);
        if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        {
            n = strtol(s, NULL, 16);
        } else {
            n = strtol(s, NULL, 10);
        }
        printf("you input %d 0x%x\n", n, n);

        printf("How many bits you want to left shift? ");
        scanf("%d", &shift);
        
        unsigned int after_shift =  n << shift;
        unsigned int multi_n = n * pow(2, shift);
        printf("left shift is %d 0x%x\n", after_shift, after_shift);
        printf("muliple result is %d 0x%x\n", multi_n, multi_n);

        printf("How many bits you want to right shift? ");
        scanf("%d", &shift);
        
        after_shift =  n >> shift;
        unsigned int div_n = n / pow(2, shift);
        printf("right shift is %d 0x%x\n", after_shift, after_shift);
        printf("div result is %d 0x%x\n", div_n, div_n);

    }
    return 0;
}


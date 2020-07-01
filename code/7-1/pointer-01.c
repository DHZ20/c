/*
 * ============================================================================
 *
 *       Filename:  pointer-01.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/01/2020 04:24:08 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lin chuan , linch1982@gmail.com
 *   Organization:  
 *
 * ============================================================================
 */
#include <stdio.h>

int main() {
    int x = 0x01234567;
    int* pInt;
    pInt = &x;
    printf("%lx\n", pInt);
    printf("%x\n", *pInt);
    printf("*****************\n");
    
    short* pShort;
    pShort = &x;
    printf("%lx\n", pShort);
    printf("%x\n", *pShort);

    printf("*****************\n");
    char* pChar;
    pChar = pShort;
    printf("%lx\n", pChar);
    printf("%x\n", *pChar);
    
    void* pVoid = pInt;
    printf("sizeof pVoid = %d\n", sizeof(pVoid));
    printf("%d\n", sizeof(pInt));
    return 0;
}

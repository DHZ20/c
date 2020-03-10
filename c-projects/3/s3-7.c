/* ++ -- */

#include <stdio.h>

int main() {
    int a = 10;
    printf("0. a is %d\n", a);
    printf("1. a is %d\n", a++);
    printf("2. a is %d\n", a);      // 11
    printf("3. a is %d\n", ++a);    // 12
    printf("4. a is %d\n", a);
    
}
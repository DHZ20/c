/* function */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 判断是否为奇数 */
int even (int n) {
    // return (n % 2);
    if (n % 2 == 1) {
        return 1;
    } else
    {
        int n = 100;
        return 0;
    }
}

int main(int argc, char** argv) {
    int a = atoi(argv[1]);
    if (even(a)) {
        printf("%d is even\n", a);
    } else {
        printf("%d is odd\n", a);
    }
}

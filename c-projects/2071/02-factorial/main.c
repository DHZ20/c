#include <stdio.h>

int factorial(int n) {
    int fac = 1;
    int i = 1;
    
    while (i <= n) {
        fac = fac * i;
        i = i+1;
    }
    
    return fac;
}

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    int result = factorial(n);
    printf("fac = %d\n", result);
    
    return 0;
}

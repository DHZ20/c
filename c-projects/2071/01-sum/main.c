#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sum = 0;
    int i = 1;

    // 当i<=100的时候，将i的值加到sum上
    while (i <= 100) {
        // 如果i是偶数，则把它加到sum上
        if (i % 2 == 0) {
            sum = sum + i;
        }
        i = i+1;
    }
    
    printf("i = %d", i);
    printf("\n");
    
    printf("sum = %d", sum);
    printf("\n");
    
    return 0;
}

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sum = 0;
    //    int i = 1;
    int i;

    // 当i<=100的时候，将i的值加到sum上
    //while (i <= 100) {
    for (i = 1; i <= 100; i++) {
        // 如果i是偶数，则把它加到sum上
        if (i % 2 == 0) {
            sum = sum + i;
        }
//        i = i+1;
    }
    
    // 这是一个注释
    printf("i = %d", i);
    printf("\n");
    
    printf("sum = %d", sum);
    printf("\n");

    return 0;
}

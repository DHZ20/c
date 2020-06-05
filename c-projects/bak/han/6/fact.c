#include <stdio.h>
#include <stdlib.h>

long fact_s(int n) {
    static long f = 1;
    f = f*n;
    return f;
}

int main(int argc, char** argv) {
    int n = atoi(argv[1]);

    printf("  0! = 1\n");

    for (int i = 1; i <= n; i++) {
        printf("%3d! = %ld\n", i, fact_s(i));
    }

    return 0;
}

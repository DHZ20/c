#include <stdio.h>
#include <stdlib.h>

int main() {
    //int* a = calloc(1, sizeof(int));
    int* a = malloc(sizeof(int));

    *a = 100;
    printf("%d\n", *a);
    printf("a is 0x%0x\n", a);

    float* b = a;
    printf("%f\n", *b);
    printf("b is 0x%0x\n", b);
}
#include <stdio.h>
#include "print_array.h"

void print_array(int a[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%4d", a[i]);
        if ((i+1) % 10 == 0) {
            printf("\n");
        }
    }
    printf("\n");
}

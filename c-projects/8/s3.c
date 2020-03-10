#include <stdio.h>

int main() {
    printf("\n");
    int a[100];
    for (int i = 0; i < 100; i++) {
        a[i] = i;
    }

    printf("a[0] is %d\n", *a);
    printf("a[1] is %d\n", *(a+1));

    printf("a     is 0x%x\n", a);
    printf("a + 1 is 0x%x\n", a + 1);
}
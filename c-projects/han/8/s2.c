#include <stdio.h>

void swap(int x, int y) {
    printf("x\'address is 0x%x\n", &x);
    printf("y\'address is 0x%x\n", &y);
    int temp = x;
    x = y;
    y = temp;
}
void swap2(int *x, int *y)
{
    printf("x\'address is 0x%x\n", &x);
    printf("y\'address is 0x%x\n", &y);
    printf("x is 0x%x\n", x);
    printf("y is 0x%x\n", y);
    int * p = x;
    x = y;  
    y = p;
    printf("after swap2 x is 0x%x\n", x);
    printf("after swap2 y is 0x%x\n", y);
}

int swap3(int* x, int* y) {
    int t = *x;
    *x = *y;
    *y = t;
}

int main() {
    int a = 1;
    int b = 2;
    printf("\n");
    printf("a\'address is 0x%x\n", &a);
    printf("b\'address is 0x%x\n", &b);
    swap3(&a, &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);


}
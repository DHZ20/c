#include <stdio.h>
#include <stdlib.h>

/*
1 -> 0001
*/
int main(int argc, char** argv) {
    int a = atoi(argv[1]);
    short b = a;
    char c = b;
    float f = a / 3.0;
    double d = a / 3.0;
    printf("int is %06d\n", a);
    printf("short is %d\n", b);
    printf("char is %d\n", c);
    printf("float is %.8f\n", f);
    printf("double is %.3lf\n", d);
    return 0;
}
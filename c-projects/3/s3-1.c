#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    printf("===============\n");

    if (a = b) {
        printf("a equals b\n");
    }
    else {
        printf("a not equals b\n");
    }
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("end\n");
    return 0;
}
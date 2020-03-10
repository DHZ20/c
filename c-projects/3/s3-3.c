#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf("大数是%d\n", (a>b)?a:b);

    /*
    if (a > b) {
        printf("大数是%d\n", a);
    }
    else {
        printf("大数是%d\n", b);
    }
    */

}
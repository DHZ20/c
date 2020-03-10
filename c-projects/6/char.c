#include <stdio.h>

int main() {
    for (unsigned char c = 0; c <= 127; c++) {
        printf("%c ", c);
    }
    printf("\n");
    /*
    printf("\\\n");
    char a = 'A';
    printf("a is 0x%0x\n", a);
    */
}
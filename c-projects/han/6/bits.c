#include <stdio.h>
#include <stdlib.h>

unsigned int JUDGE = 0x8000;

int main(int argc, char** argv) {
    short n;
    while(1) {
        printf("intput one number:");
        scanf("%d", &n);
        printf("%d is 0x%x\n", n, n);
        
        int sizeof_n = sizeof(n);
        for (int i = 0; i < sizeof_n; i++) {
            for (int j = 0; j < 8; j++)
            {
                int right = 8 * i + j;
                int right_move = JUDGE >> right;
                if (n & right_move) {
                    printf("1");
                }
                else {
                    printf("0");
                }
            }
            printf(" ");
        }

        printf("\n");
    }
    return 0;
}

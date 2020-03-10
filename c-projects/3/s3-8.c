/* deed loop */

#include <stdio.h>
#include <unistd.h>

int main()
{
    /* char 是一个byte，8bit， -128 - 127 */
    int c = 0;
    char d = 'A';
    while (c <= 127) {
        printf("%c ", (char)c);
        c++;
    }
    printf("\n");
    /*
    int a = 10;
    while (a >= 0) {
        printf("a is %d\n", a);
        sleep(1);
    }
    */
}
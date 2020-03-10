/* string */
#include <stdio.h>
#include <string.h>

int main() {
    printf("\n");
    char s[100] = "abcdefg";
    printf("%s\n", s);
    printf("01*****\n");
    s[3] = 0;
    printf("%s\n", s);

    printf("02*****\n");
    char s1[3];
    s1[0] = 'a';
    s1[1] = 'b';
    s1[2] = 'c';
    printf("%s\n", s1);
    printf("strlen of s1 is %d\n", strlen(s1));

    return 0;
}
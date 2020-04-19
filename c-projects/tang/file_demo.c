#include <stdlib.h>
#include <stdio.h>

int main(void) {
    FILE *file = fopen("flie_demo.c", "r");
    char line[500];
    char* a = fgets(line, 500, file);
    printf("%s", a);
    printf("%s", line);
}

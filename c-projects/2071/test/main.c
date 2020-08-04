#include <stdio.h>

void f(int n) {
    n++;
    int a = n++;
}

int main()
{
    f(100);
    printf("%d\n", a);
}

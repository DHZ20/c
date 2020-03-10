/**
 * @author      : banyuan (linch1982@gmail.com)
 * @file        : sample
 * @created     : Tuesday Feb 11, 2020 08:50:56 CST
 */

#include <limits.h>
#include <stdio.h>
#include <time.h>

int main()
{
    printf("int: %d - %d\n", INT_MIN, INT_MAX);
    printf("long: %ld - %ld\n", LONG_MIN, LONG_MAX);
    printf("short: %d - %d\n", SHRT_MIN, SHRT_MAX);
    printf("%d", (int)time(NULL));
    return 0;
}

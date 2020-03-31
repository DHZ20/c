#include <stdio.h>
double fact_s( int );
int main( void )
{
    int i, n;
    double value;
    printf("Input n: ");
    scanf("%d", &n);
    for( i=0; i<n; i++ ) {
        value = fact_s(i);
        printf("%3d!=%.0f\n", i, value);
    }
    return 0;
}
double fact_s(int n)
{
    static double f = 1;
    if (n == 0) {
        return 1;
    }
    f = f * n;
    return f;
}


#include <stdio.h>
double fac(int n){
    
    if(n==0||n==1)
        return n;
    else
        return n * fac(n-1);
}


int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    // double fac_rlt = 1;
    for(int i=1;i<=n;i++) {
        // fac_rlt = fac_rlt * i;
        // printf("%d != %.0f \n", i, fac_rlt);
        printf("%d != %.0f \n", i, fac(i));
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//#define MAX 1500000
int countPrimes(int n){
    char prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 57, 59};
    char* a = malloc(sizeof(char) * n);
    memset(a, 0, n);
    //0表示是素数，1表示不是素数；初始所有都是素数
    int lenBase = sizeof(prime) / sizeof(prime[0]);
    
    if (prime[lenBase-1] > n) {
        int count = 0;
        for (int i = 0; i < lenBase; i++) {
            if (prime[i] < n) {
                count++;
            } else {
                break;
            }
        }
        return count;
    }
        
    for (int i = 60; i < n; i++) {
        if ((i & 1) == 0) {
            a[i] = 1;
            continue;
        }
        int isPrime = 1;
        for (int j = 0; j < lenBase; j++) {
            if (i % prime[j] == 0){
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 0)
            a[i] = 1;
    }
    int count = 0;
    for (int i = 60; i < n; i++) {
        
        int isPrime = 1;
        if (a[i] == 0) {
            int sq = (int)sqrt(i);
            for (int j = 3; j <= sq; j = j+2)
                if (i % j == 0) {
                    isPrime = 0;
                    break;
                }
            if (isPrime == 0)
                a[i] = 1;
        }
        
        if (a[i] == 0)
            count++;
    }
    
    return count + lenBase;
}

int main()
{
    printf("%d\n", countPrimes(2));
    
    printf("%d\n", countPrimes(10000));

    printf("%d\n", countPrimes(1500000));

}

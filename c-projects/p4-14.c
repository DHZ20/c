#include <stdio.h>

int main(){
    int n;
    printf("输入一个数： ");
    scanf("%d",&n);
    int a=n/10;
    int b=n%10;
    while (a-- > 0)
    {
        printf("1234567890");
    }

    for (int i = 1; i <= b; i++)
    {
        printf("%d",i);
    }

    printf("\n");
    return 0;
}
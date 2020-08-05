#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 0, no;
    int x = 1;
    printf("请输入一个正整数：");
    scanf("%d", &no);
    while(x <= no){
        printf("pow(2,%d) = %d\n",i,x);
        x = x * 2;
        i++;
        //printf("pow(2,%d) = %g\n",i,pow(2,i));
    }
    return 0;
}

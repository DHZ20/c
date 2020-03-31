#if 0
#include <stdio.h>
int main(void)
{
    int F ;
    int C;
    printf("  F      C\n");
    
    for(F = 40;F <= 240;F = F + 20){
        C = 5 * (F - 32) / 9;
        printf("%3d%7d\n", F, C);
    }
    printf("%3d%7d\n", 300, 148);
    return 0;
}
#endif


// 作业二 尽量少的使用乘法打印阶乘表
#include <stdio.h>
int main(void)
{
    int n;
    int factorial=1;
    printf("请输入n的值:"); scanf("%d",&n);
	// 一定会输出0的阶乘
	printf("  0 !=     1\n");
	
    if (n == 0)
		//程序结束
		return 0;

	// n > 0
	for (int i = 1; i <= n; i++) {
		factorial = i * factorial;
		printf("%3d !=%6d\n", i, factorial);
	}
    return 0;
}


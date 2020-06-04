#include <stdio.h>
void draw(unsigned int n){
    int a[100][100];
    int i,j;
    for(i=0;i<n;i++){
        a[i][0]=i+1;
    }
     //每个数是上面两数之和
    for(i=1;i<n;i++){
        for(j=1;j<=i;j++){
            a[i][j]=a[i-1][j-1]+a[i-1][j];
            a[i][i]=i+1;
        }
    }
    //打印
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%5d",a[i][j]);
        }
            printf("\n");
    }
}

int main(){
    int n;
    printf("请输入：");
    scanf("%d",&n);
    draw(n);
}

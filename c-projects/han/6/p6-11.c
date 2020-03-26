#include <stdio.h>

int search_idx(const int v[], int idx[], int key, int n);

int main() {
    int n;
    int v[99];
    int idx[99];
    int key;
    int i = 0;
    int c;
    printf("请输入数组v的个数：");
    scanf("%d", &n);

    printf("输入%d个整数:", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    printf("\n请输入一个key: ");
    scanf("%d", &key);

    c = search_idx(v, idx, key, n);

    printf("与%d相同的个数为: %d\n", key, c);
    return 0;
}

int search_idx(const int v[], int idx[], int key, int n) {
    int i;
    int j = 0;
    int c = 0;
    for (i = 0; i < n; i++) {
        if (v[i] == key) {
            c++;
            idx[j++] = i;
        }
    }
    return c;
}


#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char * s);

int find_max_substr(char* s);

int not_duplicate(char* s, int n);

int main(int argc, char** argv) {
    char* s = argv[1];
    printf("%d\n", lengthOfLongestSubstring(s));
    return 0;
}

// 判断s[n]在s的字符串中是否重复
int not_duplicate(char* s, int n) {
    for (int i = 0; i < n; i++)
        if (s[i] == s[n])
            return 0;
    return 1;
}

/* 返回s开始的不重复子串的长度 */
int find_max_substr(char* s) {
    int i = 1;
    while(s[i] != 0 && not_duplicate(s, i))
        i++;
    return i;
}

int lengthOfLongestSubstring(char * s){
    // 初始化
    int max_len = 0;
    int str_len = strlen(s);
    
    // 从s开始找不重复的子串
    for (int i = 0; i < (str_len-max_len); i++) {
        int current_max_len = find_max_substr(s+i);
        if (current_max_len > max_len)
            max_len =  current_max_len;
    }
    return max_len;
}

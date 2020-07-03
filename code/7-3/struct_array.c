/**
 * @author      : banyuan (linch1982@gmail.com)
 * @file        : struct_array
 * @created     : Friday Jul 03, 2020 13:53:29 CST
 * @purpose     : 结构体数组示例
 */

#include <stdio.h>
#include <string.h>
#include <string.h>
#include <stdlib.h>

#define LEN 10

typedef struct student {
    char name[20];
    char* schoolName;
    int grade;
    int age;
    int id;
} Student;

void printStudent(Student s) {
    printf("*********\n");
    printf("name: %s\n", s.name);
    printf("grade: %d\n", s.grade);
}

void printStudents(Student s[], int n) {
    for (int i = 0; i < n; i++) {
        printStudent(s[i]);
    }
}

// 初始化学生信息的数组
void initStudents(Student s[], int n) {
    for (int i = 0; i < n; i++) {
        s[i].grade = rand()%101;
        for (int j = 0; j < 4; j++) {
            s[i].name[j] = (rand()%26) + 'a';
        }
        s[i].name[4] = '\0';
    }
}

void sort(Student s[], int n){
    for (int i = 0; i < n-1; i++) {
        int max = i;
        for (int j = i+1; j < n; j++) {
            if (s[j].grade > s[max].grade)
                max = j;
        }
        if (max != i) {
            // 交换max和i的信息
            Student t = s[i];
            s[i] = s[max];
            s[max] = t;
        }
    }
}

int main() {
    Student s[LEN];
    initStudents(s, LEN);
//    printStudents(s, LEN);
    sort(s, LEN);
    printStudents(s, LEN);
}


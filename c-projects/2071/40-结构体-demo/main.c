//
//  main.c
//  40-结构体-demo
//
//  Created by 半圆 on 2020/8/10.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct student {
//struct student {
    char name[20];
    int id;
    double math;
} Student;

void displayStudent(struct student* s) {
    printf("name: %10s\t", s->name);
    printf("id: %4d\t", s->id);
    printf("math: %6.2lf\n", s->math);
}

int main(int argc, const char * argv[]) {
    printf("size of struct student is %lu\n", sizeof(struct student));
    
    struct student s1;
    // s1.id = 1;
    (&s1)->id = 1;
    strcpy(s1.name, "zhang san");
    s1.math = 80;
    displayStudent(&s1);
    
    struct student s2 = {"li si", 2, 90};
    displayStudent(&s2);
    
    Student s[10];
    s[0] = s1;
    s[1] = s2;
    
    Student* p;
    p = &s[1];
    p = s + 1;
    strcpy(p->name, "wang wu");
    displayStudent(p);
    
    bool a = true;
    bool b = false;
    
    return 0;
}

/* struct sample */
/* struct point */

#include <string.h>
#include <stdio.h>

typedef struct person
{
    int age;
    char name[20];
    int gender;
} Person;

void show_person(Person *p);

int main() {
    Person p1;
    p1.age = 20;
    p1.gender = 1;
    strcpy(p1.name, "jack");
    show_person(&p1);
    return 0;
}

void show_person(Person *p) {
    printf("name: %s\n", p->name);
    printf("age: %d\n", p->age);
    if (p->gender == 0) {
        printf("gender: female\n");
    } else {
        printf("gender: male\n");
    }
};
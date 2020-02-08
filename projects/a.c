#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node* pre;
    struct Node* next;
    int data;
};

int main(int argc, char** argv)
{
    struct Node head;
    head.next = (struct Node*)malloc(sizeof(struct Node));
    head.next->next->next = NULL;
    printf("Hello, world!\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int data;
    struct Node *next;
} Node;

Node *head;

Node* assign() {
    return (Node*)malloc(sizeof(Node));
}

int main(void) {
    head = assign();
    Node *node1 = assign();
    head->next = node1;
    node1->data = 1;
    Node *node2 = assign();
    node2->data = 2;
    node1->next = node2;

    Node* cur = head->next;

    while (cur != NULL) {
        printf("%d\n", cur->data);
        cur = cur->next;
    }

    return 0;
}

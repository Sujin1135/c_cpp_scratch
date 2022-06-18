#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int data;
    struct Node *next;
} Node;

Node* assign() {
    Node * node =(Node*)malloc(sizeof(Node));
    node->next = NULL;
    return node;
}

void addFront(Node *root, int data) {
    Node *node = assign();
    Node *next = root->next;
    node->data = data;
    node->next = next;
    root->next = node;
}

void removeFront(Node *node) {
    Node *target = node->next;
    node->next = target->next;
    free(target);
}

void showAll(Node *head) {
    Node *cur = head->next;

    while (cur != NULL) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
}

void freeAll(Node *head) {
    Node *cur = head->next;

    while (cur != NULL) {
        Node *next = cur->next;
        free(cur);
        cur = next;
    }
    head->next = NULL;
}

int main(void) {
    Node *head = assign();

    addFront(head, 1);
    addFront(head, 2);
    addFront(head, 3);
    addFront(head, 4);
    addFront(head, 5);
    showAll(head);
    freeAll(head);
    showAll(head);

    return 0;
}

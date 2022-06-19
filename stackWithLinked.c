#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
    struct Node *next;
} Node;

typedef struct {
    struct Node *top;
} Stack;

void push(Stack *stack, int data) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = stack->top;
    stack->top = node;
}

int pop(Stack *stack) {
    Node *target = stack->top;

    if (target == NULL) {
        printf("Occurred a stack under flow");
        return -1;
    }
    int data = target->data;
    stack->top = target->next;

    free(target);

    return data;
}

void showAll(Stack *stack) {
    Node *cur = stack->top;

    while (cur != NULL) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
}

int main(void) {
    Stack stack;
    stack.top = NULL;

    push(&stack, 5);
    push(&stack, 4);
    pop(&stack);
    push(&stack, 1);
    push(&stack, 3);
    push(&stack, 5);
    pop(&stack);

    showAll(&stack);
}

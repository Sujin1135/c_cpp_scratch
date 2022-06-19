#include <stdio.h>
#include <stdlib.h>
#define INF 9999999


typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct Queue {
    struct Node *front;
    struct Node *rear;
    int count;
} Queue;

void push(Queue *queue, int data) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;

    if (queue->count == 0) {
        queue->front = node;
    } else {
        queue->rear->next = node;
    }
    queue->rear = node;
    queue->count++;
}

int pop(Queue *queue) {
    if (queue->count == 0) {
        printf("Occurred a queue under flow\n");
        return -INF;
    }
    Node *front = queue->front;
    queue->front = front->next;
    int data = front->data;
    free(front);
    queue->count--;
    return data;
}

void showAll(Queue *queue) {
    Node *cur = queue->front;

    while (cur != NULL) {
        printf("%d\n", cur->data);
        cur = cur->next;
    }
}

int main(void) {
    Queue queue;
    queue.front = queue.rear = NULL;
    queue.count = 0;

    push(&queue, 5);
    push(&queue, 4);
    pop(&queue);
    push(&queue, 3);
    push(&queue, 2);
    pop(&queue);
    push(&queue, 1);

    showAll(&queue);

    return 0;
}

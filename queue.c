#include <stdio.h>
#include <stdlib.h>
#define SIZE 10000
#define INF 9999999

int front = 0;
int rear = 0;
int queue[SIZE];

void push(int data) {
    if (rear >= SIZE) {
        printf("Occurred a queue over flow\n");
        return;
    }
    queue[rear++] = data;
}

int pop() {
    if (front == rear) {
        printf("Occurred a queue under flow\n");
        return INF;
    }
    return queue[front++];
}

void showAll() {
    for (int i = front; i < rear; i++) {
        printf("%d ", queue[i]);
    }
}

int main(void) {
    push(5);
    push(4);
    printf("pop: %d\n", pop());
    push(3);
    push(2);
    printf("pop: %d\n", pop());
    push(1);
    showAll();

    return 0;
}

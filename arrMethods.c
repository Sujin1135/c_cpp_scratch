#include <stdio.h>
#define INF 10000

int arr[INF];
int count = 0;

void addBack(int num) {
    arr[count++] = num;
}

void addFirst(int num) {
    for (int i = count; i >= 1; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = num;
    count++;
}

void prints() {
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    addBack(0);
    addBack(2);
    addBack(8);
    addBack(5);
    addBack(4);
    addFirst(1);
    addFirst(7);
    prints();
}

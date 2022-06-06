#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int main(void) {
    int(*fp)(int, int) = add;
    printf("%d\n", fp(5, 2));

    fp = sub;
    printf("%d\n", fp(5, 2));
    return 0;
}

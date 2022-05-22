#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int main() {
	int a = 1;
	int b = 5;
	int sum = add(a, b);
	printf("%d + %d = %d\n", a, b, sum);
}

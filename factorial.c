#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int a) {
	if (a == 1) return 1;
	else return a * factorial(a - 1);
}

int main(void) {
	int num;
	scanf("%d", &num);
	int sum = factorial(num);
	printf("factorial number is %d and result is %d\n", num, sum);
	return 0;
}

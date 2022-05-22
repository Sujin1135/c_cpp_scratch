#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char a[20];
	scanf("%s", a);
	a[2] = ',';
	printf("changed string would be %s\n", a);
	return 0;
}

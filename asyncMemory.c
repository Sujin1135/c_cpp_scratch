#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *a = malloc(sizeof(int));
	printf("%d\n", a);
	free(a);
	a = malloc(sizeof(int));
	printf("%d\n", a);
	free(a)
}

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int width = 3;
    int height = 3;
	int **p = (int**)malloc(sizeof(int*) * height);
	for (int i = 0; i < width; i++) {
		*(p + i) = (int*)malloc(sizeof(int) * width);
	}
	
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			*((p + 1) + j) = i * height + j;
			printf("%d ", *((p + 1) + j));
		}
		printf("\n");
	}
	
	for (int i = 0; i < height; i++) {
		*(p + 1) = i;
	}
}

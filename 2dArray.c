#include <stdio.h>
#include <limits.h>

int main(void) {
	int arr[3][3] = {
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 },
	};
	
	int i = INT_MIN;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		int j;
		for (j = 0; j < sizeof(arr[0]) / sizeof(int); j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	int (*p)[3] = arr[2];
	i = INT_MIN;
	
	printf("start to print pointer array\n");
	for (i = 0; i < 3; i++) {
		printf("%d ", p[0][i]);
	}
	
	return 0;
}

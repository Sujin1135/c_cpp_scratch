#include <stdio.h>
#include <limits.h>

int main(void) {
	int arr[10] = { 1, 2, 3, 10, 5, 4, 9, 7, 6, 8 };
	int i, maxValue = INT_MIN;
	for (i = 0; i < 10; i++) {
		if (maxValue < arr[i]) maxValue = arr[i];
	}
	printf("max value is %d\n", maxValue);
	return 0;
}

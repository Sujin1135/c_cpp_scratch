#include <stdio.h>

void printAddressesOfArr(int *arr) {
	int size = sizeof(arr);
	int i;
	for (i = 0; i < size; i++) {
		printf("address is %d\n", &arr[i]);
	}
}

int main(void) {
	int a = 5;
	int *b = &a;
	int **c = &b;
	printf("b number is %d\n", *b);
	printf("c number is %d\n", **c);
	
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printAddressesOfArr(arr);

    // 포인터의 배열주소 활용
    int *d = &arr;
    printf("%d\n", *(d + 1));

	return 0;
}

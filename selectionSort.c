#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

void showAll(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main(void) {
    int size;

    scanf("%d", &size);

    int nums[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    showAll(nums, size);

    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (nums[i] > nums[j]) {
                swap(nums, i, j);
            }
        }
    }

    showAll(nums, size);

    return 0;
}

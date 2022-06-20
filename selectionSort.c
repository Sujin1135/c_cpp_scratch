#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

void showAll(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
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
                swap(&nums[i], &nums[j]);
            }
        }
    }

    showAll(nums, size);

    return 0;
}

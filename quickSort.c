#include <stdlib.h>
#include <stdio.h>
#define SIZE 1000

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void showAll(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void quickSort(int arr[], int start, int end) {
    if (start >= end) return;

    int i = start + 1, j = end;

    while (i <= j) {
        while (i <= end && arr[i] <= arr[start]) i++;
        while (j > start && arr[j] >= arr[start]) j--;
        if (i > j) swap(&arr[start], &arr[j]);
        else swap(&arr[i], &arr[j]);
    }

    quickSort(arr, start, j - 1);
    quickSort(arr, j + 1, end);
}

int main(void) {
    int arr[SIZE] = { 5, 6, 1, 7, 3, 8, 2, 4, 9 };
    int size = 9;

    showAll(arr, size);
    quickSort(arr, 0, size - 1);
    showAll(arr, size);
    return 0;
}

#include <stdio.h>
#include "day3.1.h"

void sortArray(int arr[], int size) {
    int temp;
    for (int i = 0; i < size-1; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Ascending: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);

    printf("\nDescending: ");
    for (int i = size - 1; i >= 0; i--) printf("%d ", arr[i]);
    printf("\n");
}

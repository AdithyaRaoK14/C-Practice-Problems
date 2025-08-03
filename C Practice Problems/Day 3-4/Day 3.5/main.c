#include <stdio.h>
#include "day3.5.h"

int main() {
    int arr[10] = {1, 2, 2, 3, 4, 4, 5, 6, 1, 7};
    int size = 10;

    size = remove_duplicates(arr, size);

    printf("After removing duplicates: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

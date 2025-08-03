#include <stdio.h>
#include "day3.1.h"

int main() {
    int arr[] = {5, 2, 9, 1, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    sortArray(arr, size);
    return 0;
}

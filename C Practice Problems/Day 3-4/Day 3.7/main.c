#include <stdio.h>
#include "day3.7.h"

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int key = 7;
    int pos = binary_search(arr, 5, key);
    if (pos != -1)
        printf("Found at index %d\n", pos);
    else
        printf("Not found\n");
    return 0;
}

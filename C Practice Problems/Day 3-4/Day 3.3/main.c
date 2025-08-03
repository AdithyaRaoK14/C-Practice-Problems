#include <stdio.h>
#include "day3.3.h"

int main() {
    int arr[] = {5, 8, 1, 9, 2};
    int max, min;
    find_max_min(arr, 5, &max, &min);
    printf("Max: %d\nMin: %d\n", max, min);
    return 0;
}

#include "day3.8.h"

int sum_of_products(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i] * arr[i+1];
    }
    return sum;
}

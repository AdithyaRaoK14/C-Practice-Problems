#include <stdlib.h>
#include "day6.1.h"

int *allocate_array(int n) {
    return (int *)malloc(sizeof(int) * n);
}

int search_element(int *arr, int n, int key) {
    for(int i = 0; i < n; i++)
        if(arr[i] == key)
            return FOUND;
    return NOT_FOUND;
}

int find_max(int *arr, int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] > max)
            max = arr[i];
    return max;
}

int find_min(int *arr, int n) {
    int min = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] < min)
            min = arr[i];
    return min;
}

int sum_all(int *arr, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) sum += arr[i];
    return sum;
}

void sum_even_odd(int *arr, int n, int *even_sum, int *odd_sum) {
    *even_sum = *odd_sum = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) *even_sum += arr[i];
        else *odd_sum += arr[i];
    }
}

int is_palindrome(int *arr, int n) {
    for(int i = 0, j = n-1; i < j; i++, j--) {
        if(arr[i] != arr[j]) return NOT_PALI;
    }
    return IS_PALI;
}

int has_subset_sum(int *arr, int n, int M, int *x, int *y) {
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] + arr[j] == M) {
                *x = arr[i];
                *y = arr[j];
                return 1;
            }
        }
    }
    return 0;
}

void deallocate_array(int *arr) {
    free(arr);
}

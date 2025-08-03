#ifndef DAY6_1_H
#define DAY6_1_H

#define FOUND 1
#define NOT_FOUND 0
#define IS_PALI 1
#define NOT_PALI 0

int *allocate_array(int n);
int search_element(int *arr, int n, int key);
int find_max(int *arr, int n);
int find_min(int *arr, int n);
int sum_all(int *arr, int n);
void sum_even_odd(int *arr, int n, int *even_sum, int *odd_sum);
int is_palindrome(int *arr, int n);
int has_subset_sum(int *arr, int n, int M, int *x, int *y);
void deallocate_array(int *arr);

#endif

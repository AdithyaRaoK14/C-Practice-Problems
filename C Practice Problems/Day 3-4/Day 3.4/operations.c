#include <stdio.h>
#include "day3.4.h"

int is_in(int x, int arr[], int size) {
    for (int i = 0; i < size; i++) if (arr[i] == x) return 1;
    return 0;
}

void set_union(int a[], int n, int b[], int m) {
    printf("Union: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    for (int i = 0; i < m; i++) if (!is_in(b[i], a, n)) printf("%d ", b[i]);
    printf("\n");
}

void set_intersection(int a[], int n, int b[], int m) {
    printf("Intersection: ");
    for (int i = 0; i < n; i++) {
        if (is_in(a[i], b, m)) printf("%d ", a[i]);
    }
    printf("\n");
}

void set_difference(int a[], int n, int b[], int m) {
    printf("A - B: ");
    for (int i = 0; i < n; i++) if (!is_in(a[i], b, m)) printf("%d ", a[i]);
    printf("\nB - A: ");
    for (int i = 0; i < m; i++) if (!is_in(b[i], a, n)) printf("%d ", b[i]);
    printf("\n");
}

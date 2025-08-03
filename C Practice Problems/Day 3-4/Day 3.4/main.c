#include <stdio.h>
#include "day3.4.h"

int main() {
    int A[] = {1, 2, 3, 4};
    int B[] = {3, 4, 5, 6};
    int n = 4, m = 4;

    set_union(A, n, B, m);
    set_intersection(A, n, B, m);
    set_difference(A, n, B, m);

    return 0;
}

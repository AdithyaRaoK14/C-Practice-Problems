#include <stdio.h>
#include <assert.h>
#include "day6.1.h"

int main() {
    int n = 5, even, odd, x, y;
    int *arr = allocate_array(n);
    arr[0] = 10; arr[1] = 21; arr[2] = 30; arr[3] = 21; arr[4] = 10;

    assert(search_element(arr, n, 30) == FOUND);
    assert(find_max(arr, n) == 30);
    assert(find_min(arr, n) == 10);
    assert(sum_all(arr, n) == 92);
    sum_even_odd(arr, n, &even, &odd);
    assert(even == 50 && odd == 42);
    assert(is_palindrome(arr, n) == IS_PALI);
    assert(has_subset_sum(arr, n, 51, &x, &y) == 1);
    assert((x == 30 && y == 21) || (x == 21 && y == 30));

    deallocate_array(arr);
    return 0;
}

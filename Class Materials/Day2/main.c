#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
#include "day2.h"

int main()
{
    // problem 1: int sum_of_digit(int);

    assert(sum_of_digit(12345) == 15);
    assert(sum_of_digit(12021) == 6);
    assert(sum_of_digit(63036) == 18);

    // Problem 2: search digit in a number

    assert(digit_search(12345, 2) == FOUND);
    assert(digit_search(91145, 1) == FOUND);
    assert(digit_search(1234532, 6) == NOT_FOUND);
    assert(digit_search(10345, 0) == FOUND);

    // problem 3: is_palindrome

    assert(is_palindrome(12345) == FALSE);
    assert(is_palindrome(12321) == TRUE);
    assert(is_palindrome(513315) == TRUE);

    assert(is_prime(7) == TRUE);
    assert(is_prime(49) == FALSE);
    assert(is_prime(97) == TRUE);
    assert(is_prime(101) == TRUE);

    assert(generate_first_N_prime(10) == 10);

    assert(set_intersection_int(121342, 5121386) == 321);

    return 0;
}

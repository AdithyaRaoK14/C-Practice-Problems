#include <assert.h>
#include "day2.4.h"
int main() {
    assert(is_palindrome(12321) == 1);
    assert(is_palindrome(56788765) == 1);
    assert(is_palindrome(12345) == 0);
    return 0;
}
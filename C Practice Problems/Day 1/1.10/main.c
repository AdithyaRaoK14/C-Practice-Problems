#include <assert.h>
#include "day1.10.h"

int main() {
    assert(is_digit_or_char('5') == 1);
    assert(is_digit_or_char('a') == 0);
    assert(is_digit_or_char('0') == 1);
    assert(is_digit_or_char('9') == 1);
    assert(is_digit_or_char('#') == 0);
    return 0;
}
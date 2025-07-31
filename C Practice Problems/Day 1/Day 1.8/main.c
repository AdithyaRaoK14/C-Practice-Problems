#include <assert.h>
#include "day1.8.h"

int main() {
    assert(is_leap_year(2020) == 1);
    assert(is_leap_year(1900) == 0);
    assert(is_leap_year(2000) == 1);
    assert(is_leap_year(2023) == 0);
    return 0;
}
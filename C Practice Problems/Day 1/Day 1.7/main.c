#include <assert.h>
#include "day1.7.h"

int main() {
    assert(is_even(4) == 1);
    assert(is_even(7) == 0);
    assert(is_even(0) == 1);
    assert(is_even(-6) == 1);
    return 0;
}
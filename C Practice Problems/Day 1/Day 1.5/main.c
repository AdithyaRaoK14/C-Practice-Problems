#include <assert.h>
#include "day1.5.h"

int main() {
    assert(chars_between('A', 'E') == 3);
    assert(chars_between('E', 'A') == 3);
    assert(chars_between('A', 'B') == 0);
    assert(chars_between('X', 'Z') == 1);
    assert(chars_between('M', 'M') == 0);
    return 0;
}
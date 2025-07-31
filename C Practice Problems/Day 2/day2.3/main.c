#include <assert.h>
#include "day2.3.h"
int main() {
    assert(count_digit_occurrence(12345, 2) == 1);
    assert(count_digit_occurrence(12221, 2) == 3);
    return 0;
}
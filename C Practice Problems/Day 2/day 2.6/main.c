
#include <assert.h>
#include "day2.6.h"

int main() {
    assert(sum_series(1) == 1);
    assert(sum_series(2) == 12);
    assert(sum_series(3) == 123);
    assert(sum_series(4) == 1234); // 1+11+111+1111 = 1234
    return 0;
}

#include <assert.h>
#include "day1.2.h"

int main() {
    assert((int)(area_circle(1) * 100) == 314); // approx check
    assert((int)(area_circle(2) * 100) == 1256);
    assert((int)(area_circle(0) * 100) == 0);
    return 0;
}